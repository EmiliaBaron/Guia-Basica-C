#include <stdio.h>
#include <stdlib.h>
#include "listD.h"
#include "type.h"

listD_t *listDNew(type_t t)
{
    listD_t *l = malloc(sizeof(listD_t));
    l->type = t; // l->type es equivalente a (*l).type
    l->size = 0;
    l->first = NULL;
    l->last = NULL;
    return l;
}

void listDAddFirst(listD_t *l, void *data)
{
    nodeD_t *n = malloc(sizeof(nodeD_t));
    switch (l->type)
    {
    case TypeFAT32:
        n->data = (void *)copy_fat32((fat32_t *)data);
        break;
    case TypeEXT4:
        n->data = (void *)copy_ext4((ext4_t *)data);
        break;
    case TypeNTFS:
        n->data = (void *)copy_ntfs((ntfs_t *)data);
        break;
    }
    n->next = l->first;
    l->first = n;
    l->size++;
}

// se asume: i < l->size
void *listDGet(listD_t *l, uint8_t i)
{
    nodeD_t *n = l->first;
    for (uint8_t j = 0; j < i; j++)
        n = n->next;
    return n->data;
}

// se asume: i < l->size
void *listDRemove(listD_t *l, uint8_t i)
{
    nodeD_t *tmp = NULL;
    void *data = NULL;
    if (i == 0)
    {
        data = l->first->data;
        tmp = l->first;
        l->first = l->first->next;
    }
    else if (i == (l->size - 1))
    {
        data = l->last->data;
        tmp = l->last;
        l->last = l->last->prev;
    }
    else
    {
        nodeD_t *n = l->first;
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

void listDDelete(listD_t *l)
{
    nodeD_t *n = l->first;
    while (n)
    {
        nodeD_t *tmp = n;
        n = n->next;
        switch (l->type)
        {
        case TypeFAT32:
            rm_fat32((fat32_t *)tmp->data);
            break;
        case TypeEXT4:
            rm_ext4((ext4_t *)tmp->data);
            break;
        case TypeNTFS:
            rm_ntfs((ntfs_t *)tmp->data);
            break;
        }
        free(tmp);
    }
    free(l);
}

void listDIntercambiar(listD_t *l, uint8_t i, uint8_t j)
{
    if (l == NULL || l->size <= 1 || i == j || i >= l->size || j >= l->size)
    // caso lista vacia o 1 elem y mismo nodo a cambiar LISTA NULL O I,J MAYORES QUE |LISTA|
    {
        return;
    }
    else
    {
        // int menInd = min(i1, i2);
        // int mayInd = max(i1, i2);

        nodeD_t *nodoI = l->first;
        nodeD_t *nodoJ = l->first;
        for (uint8_t a = 0; a < i; a++)
            nodoI = nodoI->next;
        for (uint8_t a = 0; a < j; a++)
            nodoJ = nodoJ->next;

        void *dataI = nodoI->data;
        void *dataJ = nodoJ->data;

        nodoI->data = dataJ;
        nodoJ->data = dataI;

        return;

        // if (menInd == 0 && (mayInd - menInd) <= 1) // caso ni primero de lista
        // {
        //     l->first = nodoJ->next;
        //     nodoJ->next->next = nodoI->next;       // nj.n = ni
        //     nodoI->next->next = nodoJ->next->next; // ni.n = ndj |nj.n
        // }
        // else if (menInd == 0)
        // {
        //     nodeD_t *nodoMenor = l->first;
        //     l->first = nodoJ->next;
        //     nodoJ->next->next = nodoMenor->next; // nj.n = ni.n

        //     nodoJ->next = nodoMenor;             // naj.n = ni
        //     nodoMenor->next = nodoJ->next->next; // ni.n = nj.n
        // }
        // else if ((mayInd - menInd) <= 1) // caso ni atrás de nj
        // {
        //     nodoI->next = nodoJ->next; // nai.n = nj
        //     nodoJ->next = nodoI->next; //  nj.n = ni
        //     nodoI->next->next = nodoJ->next->next; // ni.n = ndj | nj.n

        // }
        // else
        // {
        //     nodoI->next = nodoJ->next;
        //     nodoJ->next->next = nodoI->next->next;
        //     nodoJ->next = nodoI->next;
        //     //incompleto

        // } //creo que redirigir memoria hubiera sido más fácil
    }
}