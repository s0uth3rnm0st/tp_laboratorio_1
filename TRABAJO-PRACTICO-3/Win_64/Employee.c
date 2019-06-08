#include <stdio.h>
#include <stdlib.h>

#include "Employee.h"

Employee* employee_new()
{
    Employee* empleadoRetorno;
    empleadoRetorno = (Employee*) calloc(sizeof(Employee),1);//malloc
    //empleadoRetorno = (Employee*) malloc(sizeof(Employee));
    return empleadoRetorno;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* empleadoRetorno;
    empleadoRetorno = employee_new();

    int id=atoi(idStr);
    int horasTrabajadas=atoi(horasTrabajadasStr);
    int sueldo=atoi(sueldoStr);

    if(empleadoRetorno!=NULL)
    {
        employee_setId(empleadoRetorno,id); //se usa el setter para no usar "->" aca
        employee_setNombre(empleadoRetorno,nombreStr);
        employee_setHorasTrabajadas(empleadoRetorno,horasTrabajadas);    //validarm si es falso liberar memoria
        employee_setSueldo(empleadoRetorno,sueldo);
    }
    else
    {
        free(empleadoRetorno);
    }
    return empleadoRetorno;
}

int employee_setHorasTrabajadas(Employee* this, int horasTrabajadas)
{
    int esCorrecto=0;
    if(this!=NULL/* && legajo>=1000*/)//<---validacion
    {
        this->horasTrabajadas=horasTrabajadas;
        esCorrecto=1;
    }
}

int employee_setId(Employee* this, int id)
{
    int esCorrecto=0;
    if(this!=NULL/* && legajo>=1000*/)//<---validacion
    {
        this->id=id;
        esCorrecto=1;
    }
}

int employee_setNombre(Employee* this, char* nombre)
{
    int esCorrecto=0;
    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        esCorrecto=1;
    }
}

int employee_setSueldo(Employee* this, int sueldo)
{
    int esCorrecto=0;
    if(this!=NULL/* && legajo>=1000*/)//<---validacion
    {
        this->sueldo=sueldo;
        esCorrecto=1;
    }
}

void mostrarEmpleado(Employee* unEmpleado)
{
    int isNull;
    if(unEmpleado!=NULL)
    {
        printf("%d--%s--%d--%d\n",unEmpleado->id,unEmpleado->nombre,unEmpleado->horasTrabajadas,unEmpleado->sueldo);
        isNull=0;
    }
}

void employee_mostrarEmpleado(Employee* unEmpleado)
{
    int isNull;
    if(unEmpleado!=NULL)
    {
        printf("%d--%s--%d\n",unEmpleado->id,unEmpleado->nombre,unEmpleado->horasTrabajadas);
        isNull=0;
    }
}

void employee_delete(Employee* theEmployee)
{
    free(theEmployee);
}

