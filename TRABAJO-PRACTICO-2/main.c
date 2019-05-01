#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employees.h"
#define T 4

int main()
{
    Employee listing[T];
    buildEmployeeArray(listing, T);
    initEmployees(listing, T);
    printEmployeesArray(listing, T);

    int option;

    option=getMenuOption("******************\nINGRESE UNA OPCION\n******************\n(1)ALTA\n(2)MODIFICACION\n(3)BAJA\n(4)INFORMAR\n\n");
    scanf("Ingrese opcion: %d",option);

    do
    {
        switch(option)
        {
            case 1:
                addEmployee(listing,T);
                break;

            case 2:

                break;

            case 3:

                break;

            case 4:

                break;

        }
    }while(option!=10);

    return 0;
}
