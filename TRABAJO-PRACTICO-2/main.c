#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10
#include "ArrayEmployees.h"
#include "biblioteca.h"


int main()
{
    int opcion;
    char opcionChar[50];
    int exit=1;

    Employee employeeListing[T];
    construirArray(employeeListing,T);
    initEmployee(employeeListing,T);
    //mostrarArray(employeeListing,T);

    while(exit==1)
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\n5.SALIR\n\n");
        while(!pedirOpcionMenu("Ingrese el numero de la opcion: ",opcionChar))
        {
            printf("OPCION INCORRECTA!! debe ser un numero.\n");
            printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\n5.SALIR\n\n");
        }

        opcion=atoi(opcionChar);

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
                sortEmployees(employeeListing, T);
                mostrarArray(employeeListing, T);
                arrayInformation(employeeListing, T);
                break;

            case 5:
                exit = 0;
                break;

            default:
                printf("Opcion incorrecta, reingrese...\n");
        }
        system("pause");
        system("cls");
    }

    return 0;
}
