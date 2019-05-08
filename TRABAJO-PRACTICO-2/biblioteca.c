#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "biblioteca.h"

int getString(char mensaje[],char input[])
{
    int i;
    int retorno=1;

    printf(mensaje);
    fflush(stdin);
    gets(input);

    for(i=0;i<strlen(input);i++)
    {
        if((input[i]<'a' || input[i]>'z') && (input[i]<'A' || input[i]>'Z'))
        {
            retorno=0;
            break;
        }
    }

    return retorno;
}

int soloNumeros(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9' )
            return 0;
        i++;
    }
    return 1;
}

int getStringNumero(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(soloNumeros(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

int getInt(char mensaje[], int *input)
{
    char ingreso[50];
    int retorno=0;
    int flag=1;
    int auxiliar=0;
    int i;
    printf(mensaje);
    scanf("%s",&ingreso);

    for(i=0;i<=strlen(ingreso);i++)
    {
        if(ingreso[i]=='.')
        {
            flag=0;
            break;
        }
    }

    auxiliar=atoi(ingreso);

    if(auxiliar>0 && flag==1)
    {
        *input=auxiliar;
        retorno=1;
    }

    return retorno;
}

void getFloat(char mensaje[],float *numero,float tamMin,float tamMax)
{
    char ingreso[50];
    int retorno=0;
    int flag=0;
    float auxiliar;
    int i;

    do
    {
        printf(mensaje);
        fflush(stdin);
        gets(ingreso);

        for(i=0;i<=strlen(ingreso);i++)
        {
            if(ingreso[i]=='.')
            {
                flag++;

                if(flag==2)
                {
                    break;
                }
            }
        }

        auxiliar=atof(ingreso);

        if(auxiliar>=tamMin && auxiliar<=tamMax &&flag!=2)
        {
            *numero=auxiliar;
            retorno=1;

        }
        if(retorno==0)
        {
            printf("ERROR, ingrese un dato valido\n");
        }

    }while(retorno==0);

}

void cargarArray(Employee listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= getEmployee();
    }
}


int mostrarArray(Employee listing[], int len)
{
    int flag=0;
    if(existEmployee(listing,len))
    {
        int i;
        printf("\t#***************************************************************#\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#APELLIDO\tNOMBRE\t\tID\tSECTOR\t\tSALARIO #\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#***************************************************************#\n\n");
        for(i=0; i<len; i++)
        {
            if(listing[i].isEmpty==OCUPADO)
            {
                printEmployee(listing[i]);
                flag=1;
            }
        }
    }
    else
    {
        if(flag==0)
        {
            printf("Aun NO se cargaron personas en el sistema!!\n");
        }
    }

}


void construirArray(Employee listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].isEmpty= LIBRE;
        listado[i].salary= 0;
        strcpy(listado[i].name, "");
        strcpy(listado[i].lastName, "");
        listado[i].id= 0;
        listado[i].sector= 0;
    }
}

int dameLugarLibre(Employee listado[], int len)
{
    int i;
    int index = -1;

    for(i=0; i<len; i++)
    {
        if(listado[i].isEmpty==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
