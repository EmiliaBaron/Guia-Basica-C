#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "type.h"

fat32_t *new_fat32()
{
    uint32_t *file = malloc(sizeof(uint32_t));

    if (file == NULL)
    {
        return NULL;
    }
    else
    {
        return file;
    }
}

ext4_t *new_ext4()
{
    uint32_t *file = malloc(sizeof(uint32_t));

    if (file == NULL)
    {
        return NULL;
    }
    else
    {
        return file;
    }
}

ntfs_t *new_ntfs()
{
    uint32_t *file = malloc(sizeof(uint32_t));

    if (file == NULL)
    {
        return NULL;
    }
    else
    {
        return file;
    }
}

fat32_t *copy_fat32(fat32_t *file)
{
    // asumo que en listremove al recibir la direccion de la data del nodo guardado,
    //  el programador se encarga de liberar la memoria
    fat32_t *file_copy = malloc(sizeof(int32_t));
    if (file_copy == NULL)
    {
        return NULL;
    }
    else
    {
        *file_copy = *file; /// aparentemente bien????
        return file_copy;
    }
}

ext4_t *copy_ext4(ext4_t *file)
{
    // asumo que en listremove al recibir la direccion de la data del nodo guardado,
    //  el programador se encarga de liberar la memoria
    ext4_t *file_copy = malloc(sizeof(int32_t));
    if (file_copy == NULL)
    {
        return NULL;
    }
    else
    {
        *file_copy = *file; /// aparentemente bien????
        return file_copy;
    }
}

ntfs_t *copy_ntfs(ntfs_t *file)
{
    // asumo que en listremove al recibir la direccion de la data del nodo guardado,
    //  el programador se encarga de liberar la memoria
    ntfs_t *file_copy = malloc(sizeof(int32_t));
    if (file_copy == NULL)
    {
        return NULL;
    }
    else
    {
        *file_copy = *file; /// aparentemente bien????
        return file_copy;
    }
}

void rm_fat32(fat32_t *file)
{
    if (file)
    {
        free(file);
        return;
    }
    else
    {
        return;
    }
}

void rm_ext4(ext4_t *file)
{
    if (file)
    {
        free(file);
        return;
    }
    else
    {
        return;
    }
}

void rm_ntfs(ntfs_t *file)
{
    if (file)
    {
        free(file);
        return;
    }
    else
    {
        return;
    }
}
