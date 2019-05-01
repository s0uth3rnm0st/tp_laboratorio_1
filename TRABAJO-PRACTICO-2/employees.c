#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employees.h"

int getMenuOption(char text[])
{
    int option;

    printf("%s",text);
    scanf("%d",&option);

    return option;
}

void buildEmployeeArray(Employee listing[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        listing[i].id=0;
        strcpy(listing[i].name,"");
        strcpy(listing[i].lastName,"");
        listing[i].salary=0;
        listing[i].sector=0;
        listing[i].isEmpty=FREE;
    }
}

int initEmployees(Employee listing[], int len)
{
    int id[3]={123,456,789};
    char name[3][50]={"Augusto","Alejandro","Fernando"};
    char lastName[3][50]={"Fernandez","Mendoza","Gonzalez"};
    float salary[3]={2500.5,4200,3150.75};
    int sector[3]={3,7,6};

    int i;

    for(i=0;i<3;i++)
    {
        listing[i].id=id[i];
        strcpy(listing[i].name,name[i]);
        strcpy(listing[i].lastName,lastName[i]);
        listing[i].salary=salary[i];
        listing[i].sector=sector[i];
        listing[i].isEmpty=OCCUPIED;
    }

    return 0;
}

void printEmployees(Employee theEmployee)
{
    printf("%5d\n %5s\n %5s\n %5f\n %5d\n \n", theEmployee.id, theEmployee.name, theEmployee.lastName, theEmployee.salary, theEmployee.sector);
}

int printEmployeesArray(Employee listing[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        if(listing[i].isEmpty==OCCUPIED)
        {
            printEmployees(listing[i]);
        }
    }
}

Employee getEmployee()
{
    Employee employeeToReturn;

    printf("Ingrese el ID: ");
    scanf("%d", &employeeToReturn.id);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(employeeToReturn.name);

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(employeeToReturn.lastName);

    printf("Ingrese el salario: ");
    scanf("%f", &employeeToReturn.salary);

    printf("Ingrese el sector: ");
    scanf("%d", &employeeToReturn.sector);

    employeeToReturn.isEmpty = OCCUPIED;

    return employeeToReturn;
}

int getFreeSpace(Employee listing[], int len)
{
    int i;
    int index = -1;

    for(i=0; i<len; i++)
    {
        if(listing[i].isEmpty==FREE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int addEmployee(Employee listing[], int len)
{
    int index;
    index= getFreeSpace(listing, len);
    if(index != -1)
    {
        listing[index]= getEmployee();
    }
    return index;
}
