#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "tester.h"

void test()
{
    int a;
    float b;
    char c[50];
    //char* d; ERROR AL DEFINIR VARIAS VARIABLES CHAR*


    while(getInt("ingrese un entero: ",&a)==0);
    printf("****************\
           \n*EL ENTERO: %d\
           \n****************\n",a);

    while(getFloat("ingrese un float: ",&b)==0);
    printf("****************\
           \n*EL FLOAT: %.2f\
           \n****************\n",b);

    while(getString_Spaces("Ingrese una string (letras con espacios): ",c)==0);
    printf("****************\
           \n*LA STRING: %s\
           \n****************\n",c);

    while(getString_NoSpaces("Ingrese una string (letras sin espacios): ",c)==0);
    printf("****************\
           \n*LA STRING: %s\
           \n****************\n",c);

    while(getString_IntNumber("Ingrese una string (Numeros Enteros): ",c)==0);
    printf("****************\
           \n*LA STRING: %s\
           \n****************\n",c);

}
