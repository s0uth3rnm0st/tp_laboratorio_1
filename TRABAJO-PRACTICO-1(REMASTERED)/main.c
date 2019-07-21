#include "tester.h"
#include "biblioteca.h"
#include <stdlib.h>



int main()
{
    //test();
    float num1;
    float num2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorial;
    char option[50];
    int exit=0;

    do
    {
        switch(menu("1.Ingresar operando A\
             \n2.Ingresar operando B\
             \n3.Calcular todas las operaciones\
             \n4.Informar resultados\
             \n5.Salir\n",option,1,5))
        {
            case 1:
                while(getFloat("operando A: ",&num1)==0);
                break;

            case 2:
                while(getFloat("operando B: ",&num2)==0);
                break;

            case 3:
                suma=num1+num2;
                resta=num1-num2;
                multiplicacion=num1*num2;
                division=num1/num2;
                factorial=factorialNum(&num1);//no se carga bien el parametro!!
                break;

            case 4:
                printf("A+B = %f\nA-B = %f\nA*B = %f\nA/B = %f\nA! = %f\n",suma,resta,multiplicacion,division,factorial);
                break;

            case 5:
                exit=1;
                break;
        }
    system("pause");
    system("cls");

    }while(exit==0);


    return 0;
}


