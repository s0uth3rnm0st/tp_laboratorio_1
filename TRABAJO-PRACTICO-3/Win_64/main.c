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

    //Employee* unEmpleado=employee_newParametros("101","Juan","140","25000"); //agregar en la linked list y ver si anda


    controller_loadFromText(ARCHIVO,listaEmpleados);
    controller_ListEmployee(listaEmpleados);
    int len;
    len=ll_len(listaEmpleados);

    printf("LL:\n");
    printf("HAY %d ELEMENTOS EN LA LL\n",len);


    controller_addEmployee(listaEmpleados);
    controller_ListEmployee(listaEmpleados);
    controller_editEmployee(listaEmpleados);
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
