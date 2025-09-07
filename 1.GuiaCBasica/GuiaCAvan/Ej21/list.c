#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "type.h"

// funciones de tipos
funcCopy_t getCopyFunction(type_t t)
{
    switch (t)
    {
    case TypeFAT32:
        return (funcCopy_t)copy_fat32;
        break;
    case TypeEXT4:
        return (funcCopy_t)copy_ext4;
        break;
    case TypeNTFS:
        return (funcCopy_t)copy_ntfs;
        break;
    default:
        return NULL;
        break;
    }
}

funcRm_t getRmFunction(type_t t)
{
    switch (t)
    {
    case TypeFAT32:
        return (funcRm_t)rm_fat32;
        break;
    case TypeEXT4:
        return (funcRm_t)rm_ext4;
        break;
    case TypeNTFS:
        return (funcRm_t)rm_ntfs;
        break;
    default:
        return NULL;
        break;
    }
}

// funciones de listas

list_t *listNew(type_t t)
{
    list_t *l = malloc(sizeof(list_t));
    l->type = t; // l->type es equivalente a (*l).type
    l->size = 0;
    l->first = NULL;
    return l;
}

void listAddFirst(list_t *l, void *data)
{
    node_t *n = malloc(sizeof(node_t));
    n->data = getCopyFunction(l->type)(data);
    n->next = l->first;
    l->first = n;
    l->size++;
}

// se asume: i < l->size
void *listGet(list_t *l, uint8_t i)
{
    node_t *n = l->first;
    for (uint8_t j = 0; j < i; j++)
        n = n->next;
    return n->data;
}

// se asume: i < l->size
void *listRemove(list_t *l, uint8_t i)
{
    node_t *tmp = NULL;
    void *data = NULL;
    if (i == 0)
    {
        data = l->first->data;
        tmp = l->first;
        l->first = l->first->next;
    }
    else
    {
        node_t *n = l->first;
        for (uint8_t j = 0; j < i - 1; j++)
            n = n->next;
        data = n->next->data;
        tmp = n->next;
        n->next = n->next->next;
    }
    free(tmp);
    l->size--;
    return data;
}

void listDelete(list_t *l)
{
    node_t *n = l->first;
    while (n)
    {
        node_t *tmp = n;
        n = n->next;
        getRmFunction(l->type)(tmp->data);
        free(tmp);
    }
    free(l);
}

void listIntercambiar(list_t *l, uint8_t i, uint8_t j)
{
    if (l == NULL || l->size <= 1 || i == j || i >= l->size || j >= l->size)
    // caso lista vacia o 1 elem y mismo nodo a cambiar LISTA NULL O I,J MAYORES QUE |LISTA|
    {
        return;
    }
    else
    {
        node_t *nodoI = l->first;
        node_t *nodoJ = l->first;
        for (uint8_t a = 0; a < i; a++)
            nodoI = nodoI->next;
        for (uint8_t a = 0; a < j; a++)
            nodoJ = nodoJ->next;

        void *dataI = nodoI->data;
        void *dataJ = nodoJ->data;

        nodoI->data = dataJ;
        nodoJ->data = dataI;

        return;
    }
}