#include "biblioteca.h"


int pedirOpcionMenu(char texto[])
    {
     int opcion;

        printf("%s",texto);

        printf("elija una opcion: ");
        scanf("%d",&opcion);

        return opcion;
    }

/*
int pedirOperando(int *dato)
{
    int aux;
    int sePudo;
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

*/

int pedirDato(int *dato)
{
    int aux;
    int sePudo;
    int retorno=0;

    printf("ingrese dato ");
    if(scanf("%d",&aux)==1)
    {
            *dato=aux;
            retorno= 1;
    }

return retorno;

}

int dividir(int datoA, int datoB, float *resultado) //puntero al resultado
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
    int retorno;

    aux=(float)datoA+datoB;
    *resultado=aux;
    retorno= 1;

    return retorno;
}

int resta(int datoA, int datoB, float *resultado)
{
    float aux;
    int retorno;

    aux=(float)datoA-datoB;
    *resultado=aux;
    retorno= 1;

    return retorno;
}

