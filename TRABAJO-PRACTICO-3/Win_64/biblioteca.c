#include <stdio.h>
#include <stdlib.h>

#include "biblioteca.h"

int pedirOpcionMenu(char texto[],char opcion[])
{
 int retorno=1;

    printf("%s",texto);
    if(!getStringNumero("",opcion))
    {
        retorno=0;
    }


    return retorno;
}

int getString(char mensaje[],char* input)
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

int getStringNumero(char mensaje[],char input[])
{
    char aux[256];
    int retorno=0;
    getString(mensaje,aux);
    if(soloNumeros(aux))
    {
        strcpy(input,aux);
        retorno= 1;
    }
    return retorno;
}

int soloNumeros(char str[])
{
    int i = 0;
    int retorno=1;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9' )
            retorno= 0;
        i++;
    }
    return retorno;
}
