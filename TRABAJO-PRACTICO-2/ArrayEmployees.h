#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1


                                /****************************** HACER DOXY */

typedef struct
{
    int isEmpty;
    float salary;
    char name[50];
    char lastName[50];
    int id;
    int sector;
}Employee;

int getString(char mensaje[],char input[]);

void getFloat(char mensaje[],float *numero,float tamMin,float tamMax);

int getInt(char mensaje[], int *input);

Employee getEmployee();

void initEmployee(Employee[],int);

void sortEmployees(Employee listing[], int len);

void printEmployee(Employee);

void cargarArray(Employee[], int);

//int mostrarArray(Employee[], int);

void construirArray(Employee[], int);

int addEmployee(Employee [], int );

int dameLugarLibre(Employee[],int);

int fullArray(Employee listing[],int len);

int existEmployee(Employee listing[],int len);

void salaryTotal (Employee listing[], int len);
