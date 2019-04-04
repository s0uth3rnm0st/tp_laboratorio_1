
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int sePudoDividir;
    int sumar;
    int restar;
    int multiplicar;
    int sacarFactorialDatoA;
    int sacarFactorialDatoB;
    float respuestaDivision;
    float respuestaSuma;
    float respuestaResta;
    float respuestaMultiplicacion;
    float respuestaFactorialDatoA;
    float respuestaFactorialDatoB;
    int datoA;
    int datoB;
    int opcion;
    char seguir='s';


    do
    {
        opcion = pedirOpcionMenu(" 1. Ingrese el primer operando\n 2. Ingrese el segundo operando\n 3. Calcular operaciones\n 4. Informar Resultados\n 5. Salir\n");
        switch(opcion)
        {
            case 1:
                pedirDato(&datoA);
                break;

            case 2:
                pedirDato(&datoB);
                break;

            case 3:
                sePudoDividir=dividir(datoA,datoB,&respuestaDivision);
                sumar=suma(datoA,datoB,&respuestaSuma);
                restar=resta(datoA,datoB,&respuestaResta);
                multiplicar=multiplicacion(datoA,datoB,&respuestaMultiplicacion);
                sacarFactorialDatoA=factorial(datoA);
                sacarFactorialDatoB=factorial(datoB);
                break;

            case 4:

                printf("la respuesta de la suma es %.3f \n ",respuestaSuma);

                printf("la respuesta de la resta es %.3f\n",respuestaResta);

                if(sePudoDividir==1)
                {
                    printf("la respuesta de la division es %.3f\n",respuestaDivision);
                }
                else
                {
                    printf("ERROR, no se puede hacer la division. . .\n");
                }

                printf("La respuesta de la multiplicacion es %.3f\n",respuestaMultiplicacion);

                if(sacarFactorialDatoA!=0)
                {
                    printf("El factorial del primer numero es: %d\n",sacarFactorialDatoA);
                }
                else
                {
                    printf("el factorial del primer numero (0) es 1\n");
                }

                if(sacarFactorialDatoB!=0)
                {
                    printf("El factorial del primer numero es: %d\n",sacarFactorialDatoB);
                }
                else
                {
                    printf("el factorial del segundo numero (0) es 1\n");
                }

                break;

            case 5:
                seguir = 'n';
                break;

            default:
                printf("Opcion incorrecta, reingrese\n");
                break;
        }
        system("pause");
        fflush(stdin);
        system("cls");
    }while(seguir=='s');




}




