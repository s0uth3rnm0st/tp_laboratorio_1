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
    Employee* theEmployee=employee_new();

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);

    printf("%s \t-- %s \t  -- %s \t-- %s\n",id,nombre,horasTrabajadas,sueldo);
    while(!feof(pFile))
    {
        theEmployee=employee_new();

        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",id,nombre,horasTrabajadas,sueldo);

        strcpy(theEmployee->nombre,nombre);
        theEmployee->id=atoi(id);
        theEmployee->horasTrabajadas=atoi(horasTrabajadas);
        theEmployee->sueldo=atoi(sueldo);

        ll_add(pArrayListEmployee,theEmployee);
    }

    fclose(pFile);
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
