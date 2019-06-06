#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#define ARCHIVO ".\\data.csv"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char id[500],nombre[500],horasTrabajadas[500],sueldo[500];
    int contador=0;
    Employee* theEmployee=employee_new();
    Employee list[51]; //no se que hace


    if((pFile=fopen(ARCHIVO,"r"))==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }
    else
    {
        printf("Archivo abierto exitosamente!!\n\n");
    }


    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo); //es para la primer fila que suele tener todos char


    printf("%s  -- %s -- %s -- %s",id,nombre,horasTrabajadas,sueldo);
    printf("\n");
    while(!feof(pFile))
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);

        printf("%s \t-- %s \t  -- %s \t-- %s",id,nombre,horasTrabajadas,sueldo);
        printf("\n");

        strcpy(theEmployee->nombre,nombre);
        theEmployee->id=atoi(id);
        theEmployee->horasTrabajadas=atoi(horasTrabajadas);
        theEmployee->sueldo=atof(sueldo);
        list[contador]=*theEmployee;

        contador++; // se rompe en el 66
    }

    fclose(pFile);

    int i;
    printf("\nESTRUCTURA: \n");
    employee_mostrarArrayEmpleado(list,i,20);
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
