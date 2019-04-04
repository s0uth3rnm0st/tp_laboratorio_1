#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int pedirOpcionMenu(char texto[])
    {
     int opcion;

        printf("%s",texto);

        printf("elija una opcion: ");
        scanf("%d",&opcion);

        return opcion;
    }

float pedirDato(float *dato)
{
    float aux;
    int retorno=0;

    printf("ingrese dato ");
    if(scanf("%d",&aux)==1)
    {
            *dato=aux;
            retorno= 1;
    }

return retorno;

}

int dividir(int datoA, int datoB, float *resultado)
{
    float aux;
    int retorno;

    if(datoB!=0)
    {
        aux=(float)datoA/datoB;
        *resultado=aux;
        retorno= 1;
    }
    return retorno;
}


int suma(int datoA, int datoB, float *resultado)
{
    float aux;

    aux=(float)datoA+datoB;
    *resultado=aux;
}

int resta(int datoA, int datoB, float *resultado)
{
    float aux;

    aux=(float)datoA-datoB;
    *resultado=aux;
}

int multiplicacion(int datoA, int datoB, float *resultado)
{
    float aux;

    aux=(float)datoA*datoB;
    *resultado=aux;
}

int factorial (int dato)
{
    int respuesta;
    if(dato==1)
    {
        return 1;
    }
   else
    {
        if(dato==0)
        {
            return 0;
        }
    }

    if(dato>0)
    {
        respuesta=dato*factorial(dato-1);
        return respuesta;
    }
}

