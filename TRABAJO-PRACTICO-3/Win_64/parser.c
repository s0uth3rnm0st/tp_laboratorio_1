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
    char id[500],name[500],hoursWorked[500],salary[500];
    int contador=0;
    Employee theEmployee;
    Employee list[51];


    if((pFile=fopen(ARCHIVO,"r"))==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,name,hoursWorked,salary); //es para la primer fila que suele tener todos char


    printf("%s  -- %s -- %s -- %s",id,name,hoursWorked,salary);
    printf("\n");
    while(!feof(pFile))
    {
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,name,hoursWorked,salary);

        printf("%d \t-- %s \t  -- %t \t-- %f",id,name,hoursWorked,salary);
        printf("\n");

        strcpy(theEmployee.nombre,name);
        theEmployee.id=atoi(id);
        theEmployee.horasTrabajadas=atoi(hoursWorked);
        theEmployee.sueldo=atof(salary);
        list[contador]=theEmployee;

        contador++;
    }

    int i;
    fclose(pFile);

    printf("\nESTRUCTURA: \n");
    for(i=0; i<3; i++)
    {
        printf("%s - %d - %d\n", lista[i].nombre, lista[i].legajo, lista[i].nota);
       // break;
    }
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
