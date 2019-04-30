#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employees.h"

int main()
{
    Employee listing[3];
    buildEmployeeArray(listing, 3);
    initEmployees(listing, 3);
    printEmployeesArray(listing, 3);

    int option;

    option=getMenuOption("******************\nINGRESE UNA OPCION\n******************\n(1)ALTA\n(2)MODIFICACION\n(3)BAJA\n(4)INFORMAR\n\n");
    switch(option)
    {
        case 1:

            break;

        case 2;

            break;

        case 3;

            break;

        case 4;

            break;

    }

    return 0;
}
