#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char name[50];
    char lastName[50];
    float salary;
    int sector;
    int isEmpty;
}sEmployee;

#endif // BIBLIOTECA_H_INCLUDED

int insertEmployee(sEmployee listing[], int s);

int getFreeSpace(sEmployee listing[], int s);
/*
int borrarProducto(eProducto lista[], int tam);

int editarProducto(eProducto lista[], int tam);

void mostrarArray(eProducto listado[], int cant);

void mostrarProducto(eProducto unProducto);
*/
