#ifndef EMPLOYEES_H_INCLUDED
#define EMPLOYEES_H_INCLUDED
#include <string.h>
#define FREE 0
#define OCCUPIED 1
#define DELETED -1

typedef struct
{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}Employee;

#endif // EMPLOYEES_H_INCLUDED

int getMenuOption(char text[]);

void buildEmployeeArray(Employee listing[], int len);

int initEmployees(Employee listing[], int len);

void printEmployees(Employee theEmployee);

int printEmployeesArray(Employee listing[], int length);

int addEmployee(Employee listing[], int len);

