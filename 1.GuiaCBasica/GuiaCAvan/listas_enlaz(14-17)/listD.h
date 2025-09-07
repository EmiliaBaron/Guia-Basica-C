#include <stdio.h>
#include <stdint.h>
#include "type.h"

#ifndef LIST_H
#define LIST_H

typedef struct nodeD
{
    void *data;
    struct node *next;
    struct node *prev;
} nodeD_t;

typedef struct listD
{
    type_t type;
    uint8_t size;
    nodeD_t *first;
    nodeD_t *last;
} listD_t;

listD_t *listDNew(type_t t);

void listDAddFirst(listD_t *l, void *data); // copia el dato
void *listDGet(listD_t *l, uint8_t i);      // se asume: i < l->size
void *listDRemove(listD_t *l, uint8_t i);   // se asume: i < l->size
void listDDelete(listD_t *l);
void listDIntercambiar(listD_t *l, uint8_t i1, uint8_t i2);

#endif