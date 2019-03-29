

#include <stdlib.h>
#include "biblioteca.h"



int main()
{
   int opcion;
   char seguir = 's';
   float A;
   float B;
   float resultado;

   do
   {
        opcion = pedirOpcionMenu(" 1. Ingrese el primer operando\n 2. Ingrese el segundo operando\n 3. Calcular operaciones\n 4. Informar Resultados\n 5. Salir\n");

        switch(opcion)
        {
            case 1:
                printf("Ingresando el primer operando...\n");
                A=pedirOperando("ingrese el operando: ");
                break;

            case 2:
                printf("Ingresando el segundo operando...\n");
                B=pedirOperando("ingrese el operando: ");
                break;

            case 3:
                printf("Calculando operaciones...\n");
                resultado=A+B;

                break;

            case 4:
                printf("Los resultados son: \n");
                printf("%f\n",resultado);
                break;

            case 5:
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



