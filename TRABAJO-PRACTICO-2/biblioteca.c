#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FREE 0
#define OCCUPIED 1
#define DELETED -1

#include "biblioteca.h"

sEmployee getEmployee()
{
    sEmployee employeeToReturn;

    printf("Ingrese legajo: ");
    fflush(stdin);
    gets(employeeToReturn.id);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(employeeToReturn.name);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(employeeToReturn.lastName);

    printf("Ingrese salario: ");
    scanf("%f", &employeeToReturn.salary);

    printf("Ingrese el sector: ");
    scanf("%d", &employeeToReturn.sector);

    employeeToReturn.isEmpty = OCCUPIED;

    return employeeToReturn;
}

int insertEmployee(sEmployee listing[], int s)
{
    int index;
    index= getFreeSpace(listing, s);
    if(index != -1)
    {
        listing[index]= getEmployee();
    }
    return index;
}

int getFreeSpace(sEmployee listing[], int s);
{
    int i;
    int index = -1;

    for(i=0; i<s; i++)
    {
        if(listing[i].isEmpty==FREE)
        {
            index = i;
            break;
        }
    }
    return index;
}
/*
int borrarProducto(eProducto lista[], int tam)
{


 int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
          lista[i].estado = LIBRE;
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

    return 0;
}

int editarProducto(eProducto lista[], int tam)
{
   int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el codigo de barras: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].codigoDeBarra, codigo)==0)
       {
           printf("Ingrese el nuevo precio: ");
           scanf("%f", &lista[i].precio);
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

   return 0;
}

void mostrarArray(eProducto listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].estado==OCUPADO)
        {
            mostrarProducto(listado[i]);
        }
    }
}

void mostrarProducto(eProducto unProducto)
{
    printf("%15s %15s %10s %10s %10f %5d\n", unProducto.nombre, unProducto.proveedor, unProducto.codigoDeBarra, unProducto.fechaDeVencimiento, unProducto.precio, unProducto.estado);
}
*/
