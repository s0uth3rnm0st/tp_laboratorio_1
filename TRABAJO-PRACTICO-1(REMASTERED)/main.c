#include "biblioteca.h"
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    int a;
    float b;

    while(getInt("ingrese un entero: ",&a)==0);
    printf("****************\
           \n*EL ENTERO: %d\
           \n****************\n",a);

    while(getFloat("ingrese un float:  ",&b)==0);
    printf("****************\
           \n*EL FLOAT: %.2f\
           \n****************",b);

    return 0;
}
