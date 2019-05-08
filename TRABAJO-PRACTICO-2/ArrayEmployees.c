#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000

#include "ArrayEmployees.h"
#include "biblioteca.h"

Employee getEmployee()
{
    Employee employeeReturn;

    while(getString("ingrese el nombre: ",employeeReturn.name)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getString("ingrese el apellido: ",employeeReturn.lastName)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getInt("ingrese el sector: ",&employeeReturn.sector)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    getFloat("ingrese el salario: ", &employeeReturn.salary, MIN, MAX);

    employeeReturn.isEmpty = OCUPADO;

    return employeeReturn;
}

void sortEmployees(Employee listing[], int len)
{
    Employee aux;
    //int auxEntero;
    int i,j;
    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].sector>listing[j].sector)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].sector==listing[j].sector)
            {
                if(strcmpi(listing[i].lastName,listing[j].lastName)==1)
                {
                    aux=listing[i];
                    listing[i]=listing[j];
                    listing[j]=aux;
                }
            }


        }
    }
}


void printEmployee(Employee theEmployee)
{
    printf("%15s %15s %10d %9d %20f $\n",theEmployee.lastName, theEmployee.name, theEmployee.id, theEmployee.sector, theEmployee.salary);
}

int addEmployee(Employee listing[], int len)
{
    int indice;
    indice= dameLugarLibre(listing, len);
    if(indice != -1)
    {
        listing[indice]= getEmployee();

        for(indice = 0 ; indice < len ; indice++)
        {
            listing[indice].id =  indice + 1;
        }
        printf("Empleado registrado exitosamente.\n");
    }
    else
    {
        fullArray(listing,len);
    }


    return indice;
}

int fullArray(Employee listing[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty == OCUPADO)
        {
            printf("No quedan lugares libres, borre o modifique un empleado\n");
            break;
        }
    }
}

int existEmployee(Employee listing[],int len)
{
    int i;
    int ret=0;
    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty == OCUPADO)
        {
            ret=1;
            break;
        }
    }
    return ret;
}


int deleteEmployee(Employee listing[], int len)
{

    int i;
    int id;
    int loEncontro = 0;

    if(existEmployee(listing,len))
    {
        getInt("Ingrese el ID: ",&id);

        for(i=0; i<len; i++)
        {
            if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
            {
                listing[i].isEmpty = LIBRE;
                printf("Empleado removido exitosamente.\n");
                loEncontro = 1;
                break;
            }

        }
    }
    else
    {
        printf("Aun NO se cargaron personas en el sistema!!\n");
        loEncontro = 1;
    }

    if(loEncontro==0)
    {
        printf("ID inexistente!!\n\n");
    }

    return 0;
}

void initEmployee(Employee listing[],int len)
{
    float salary[3]={50000,42300.95,19100.52};
    char name[3][50]={"Alejandro","Franco","Julian"};
    char lastName[3][50]={"Terrabusi","Arcor","Bagley"};

    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id =  i + 1;
    }

    int sector[3]={1,2,3};


    for(i=0;i<3;i++)
    {
        strcpy(listing[i].name,name[i]);
        strcpy(listing[i].lastName, lastName[i]);
        listing[i].sector= sector[i];
        listing[i].salary=salary[i];
        listing[i].isEmpty = OCUPADO;
    }
}

int editEmployee(Employee listing[], int len)
{
    int i;
    int id;
    int loEncontro = 0;

    if(existEmployee(listing,len))
    {
    getInt("Ingrese el ID: ",&id);

        for(i=0; i<len; i++)
        {
            if(listing[i].id==id && listing[i].isEmpty==OCUPADO)
            {


                while(getString("ingrese el nombre: ",listing[i].name)==0)
                {
                    printf("ERROR, ingrese un dato valido\n");
                }

                while(getString("ingrese el apellido: ",listing[i].lastName)==0)
                {
                    printf("ERROR, ingrese un dato valido\n");
                }


                while(getInt("ingrese el sector: ",&listing[i].sector)==0)
                {
                    printf("ERROR, ingrese un dato valido\n");
                }

                getFloat("ingrese el salario: ", &listing[i].salary, MIN, MAX);

                loEncontro=1;

                printf("Empleado modificado exitosamente.\n");

                break;
            }
        }
    }
    else
    {
        printf("Aun NO se cargaron personas en el sistema!!\n");
        loEncontro = 1;
    }


    if(loEncontro==0)
    {
        printf("ID inexistente!!\n");
    }

   return 0;
}

void salaryTotal (Employee listing[], int len)
{
    int i;
    float suma=0;
    int employeeCantidad=0;
    float promedio=0;
    int superaPromedio=0;

    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty==OCUPADO)
        {
            suma=listing[i].salary+suma;
            employeeCantidad++;
        }
    }
    promedio=(float)suma/employeeCantidad;


    for(i=0;i<len;i++)
    {
        if(listing[i].salary>promedio)
        {
            superaPromedio++;
        }
    }
    printf("\nEl TOTAL de los salarios es: \t\t%f\nEl PROMEDIO de los salarios es: \t%f\nLos empleados que SUPERAN EL PROMEDIO son: \t\t%d\n",suma,promedio,superaPromedio);

    printf("#********#\n");
    printf("# TOTAL\t #\n#  DE\t #\n#SALARIOS#\n");
    printf("#********#\n\n");
}
