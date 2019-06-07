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
   /* do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);*/

    FILE *pFile;


    //parser_EmployeeFromText(pFile,listaEmpleados);

    Employee* unEmpleado=employee_newParametros("101","Juan","140","25000"); //agregar en la linked list y ver si anda
    //mostrarEmpleado(unEmpleado);

    controller_loadFromText(ARCHIVO,listaEmpleados);
    //controller_ListEmployee(listaEmpleados); /********ARREGLAR*******/
    return 0;
}
