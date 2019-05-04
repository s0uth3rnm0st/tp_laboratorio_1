#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    int isEmpty;
    float salary;
    char name[50];
    char lastName[50];
    char id[13];
    char sector[50];
}Employee;


Employee getEmployee();

void initEmployee(Employee[],int);

void sortEmployees(Employee listing, int len);

void printEmployee(Employee);

void cargarArray(Employee[], int);

void mostrarArray(Employee[], int);

void construirArray(Employee[], int);

int addEmployee(Employee [], int );

int dameLugarLibre(Employee[],int);

int existEmployee(Employee,Employee[]);
