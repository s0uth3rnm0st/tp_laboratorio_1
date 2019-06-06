#include <stdio.h>
#include <stdlib.h>

#include "Employee.h"

Employee* employee_new()
{
    Employee* empleadoRetorno;
    empleadoRetorno = (Employee*) malloc(sizeof(Employee));//malloc
    return empleadoRetorno;
}

Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr)
{
    Employee* empleadoRetorno;
    empleadoRetorno = employee_new();

    int id=atoi(idStr);
    int horasTrabajadas=atoi(horasTrabajadasStr);

    if(empleadoRetorno!=NULL)
    {
        employee_setId(empleadoRetorno,id); //se usa el setter para no usar "->" aca
        employee_setNombre(empleadoRetorno,nombreStr);
        employee_setHorasTrabajadas(empleadoRetorno,horasTrabajadas);    //validarm si es falso liberar memoria
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

void mostrarEmpleado(Employee* unEmpleado)
{
    int isNull;
    if(unEmpleado!=NULL)
    {
        printf("%d--%s--%d\n",unEmpleado->id,unEmpleado->nombre,unEmpleado->horasTrabajadas);
        isNull=0;
    }
}
