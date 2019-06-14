#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#define ARCHIVO ".\\data.csv"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    FILE *pFile;
    Employee auxEmployee;
    Employee* empleadoArray;
   /* do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);*/
    int opcion;
    char opcionChar[50];
    int exit=1;
    //Employee* unEmpleado=employee_newParametros("101","Juan","140","25000"); //agregar en la linked list y ver si anda
    while(exit==1)
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\n5.CARGAR DESDE EL ARCHIVO\n6.SALIR\n\n");
        while(!pedirOpcionMenu("Ingrese el numero de la opcion: ",opcionChar))
        {
            printf("OPCION INCORRECTA!! debe ser un numero.\n");
            printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\n5.CARGAR DESDE EL ARCHIVO\n6.SALIR\n\n");
        }

        opcion=atoi(opcionChar);

        switch(opcion)
        {
            case 1:
            controller_addEmployee(listaEmpleados);
            break;

            case 2:
            controller_removeEmployee(listaEmpleados);
            break;

            case 3:
            controller_editEmployee(listaEmpleados);
            break;

            case 4:
            controller_ListEmployee(listaEmpleados);
            int len;
            len=ll_len(listaEmpleados);
            printf("HAY %d ELEMENTOS EN LA LL\n",len);

            break;

            case 5:
            controller_loadFromText(&ARCHIVO,listaEmpleados);
            break;

            case 6:
            exit = 0;
            break;

            default:
            printf("Opcion incorrecta, reingrese...\n");
            break;
        }
        system("pause");
        system("cls");
    }

    /*controller_loadFromText(ARCHIVO,listaEmpleados);
    controller_ListEmployee(listaEmpleados);
    int len;
    len=ll_len(listaEmpleados);

    printf("LL:\n");
    printf("HAY %d ELEMENTOS EN LA LL\n",len);


    controller_addEmployee(listaEmpleados);
    controller_ListEmployee(listaEmpleados);
    controller_editEmployee(listaEmpleados);
    controller_removeEmployee(listaEmpleados);
    controller_ListEmployee(listaEmpleados);

    len=ll_len(listaEmpleados);

    printf("LL:\n");
    printf("HAY %d ELEMENTOS EN LA LL\n",len);

    /*empleadoArray=&auxEmployee;
    char* nombre;
    while(employee_getNombre(empleadoArray,nombre)==0)
    {
        printf("Error, re");
    }

    printf("%s\n",empleadoArray->nombre);*/
    return 0;
}

