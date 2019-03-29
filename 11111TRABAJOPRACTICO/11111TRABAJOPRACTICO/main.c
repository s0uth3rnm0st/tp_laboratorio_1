
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int pedirOperando(char texto2[]);

int main()
{
   int opcion;
   char seguir = 's';
   int operando;

   do
   {
        opcion = pedirOpcionMenu(" 1. Ingrese el primer operando\n 2. Ingrese el segundo operando\n 3. Baja\n 4. Modificacion\n 5. Informes\n");//es un prompt //-----> parametros actuales

        switch(opcion)
        {
            case 1:
                printf("Estoy ingresando el primer operando...\n");
                operando=pedirOperando("ingrese el operando: ");
                break;

            case 2:
                printf("Estoy ingresando el segundo operando\n");
                operando=pedirOperando("ingrese el operando: ");
                break;

            case 3:
                printf("Estoy dando de baja\n");
                break;

            case 4:
                printf("Estoy modificando\n");
                break;

            case 5:
                printf("Estoy informando\n");
                break;

            case 6:
                seguir = 'n';
                break;

            default:
                printf("Opcion incorrecta, reingrese\n");
                break;
       }
       system("pause");
       system("cls");
   }while(seguir=='s');
    return 0;
}

int pedirOperando(char texto2[])
{
    int operando;
    printf("%s",texto2);

    scanf("%d",&operando);
    printf("el operando es %d\n",operando);
}

