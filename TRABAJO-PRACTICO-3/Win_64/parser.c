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
    char idStr[500],nombreStr[500],horasTrabajadasStr[500],sueldoStr[500];
    int id,horasTrabajadas,sueldo;
    Employee* theEmployee=employee_new();

    fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",idStr,nombreStr,horasTrabajadasStr,sueldoStr);

    printf("%s \t-- %s \t  -- %s \t-- %s\n",idStr,nombreStr,horasTrabajadasStr,sueldoStr);
    while(!feof(pFile))
    {
        theEmployee=employee_new();

        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",idStr,nombreStr,horasTrabajadasStr,sueldoStr);

        employee_setNombre(theEmployee,nombreStr);
        id=atoi(idStr);
        employee_setId(theEmployee,id);
        horasTrabajadas=atoi(horasTrabajadasStr);
        employee_setHorasTrabajadas(theEmployee,horasTrabajadas);
        sueldo=atoi(sueldoStr);
        employee_setSueldo(theEmployee,sueldo);

        ll_add(pArrayListEmployee,theEmployee);
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
