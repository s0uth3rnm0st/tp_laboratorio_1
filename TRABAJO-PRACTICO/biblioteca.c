#include "biblioteca.h"


int pedirOpcionMenu(char texto[])
    {
     int opcion;

        printf("%s",texto);

        printf("elija una opcion: ");
        scanf("%d",&opcion);

        return opcion;
    }


float pedirOperando(char texto[])
{
    float operando;

    printf("%s",texto);

    scanf("%f",&operando);
    printf("el operando es %.3f\n",operando);
    return operando;
}

float calcularOperaciones(char texto[])
{

}
