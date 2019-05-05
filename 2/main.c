#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "employee.h"

int main()
{
    //definir array.
    //cargar array.
    //mostrar array.

    int opcion;

    Employee theEmployee;
    Employee employeeListing[T];
    construirArray(employeeListing,T);
    initEmployee(employeeListing,T);
    mostrarArray(employeeListing,T);

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\nElija opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                addEmployee(employeeListing, T);
                break;

            case 2:
                deleteEmployee(employeeListing, T);
                break;
            case 3:
                editEmployee(employeeListing, T);
                break;

            case 4:
                mostrarArray(employeeListing, T);
                break;
        }
    }while(opcion!=10);







    return 0;
}
