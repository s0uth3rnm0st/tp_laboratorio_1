#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "employee.h"


Employee getEmployee()
{
    Employee employeeReturn;

    printf("Ingrese el nombre: ");    /** no hacerlo por bloques, ARREGLAR **/
    fflush(stdin);
    gets(employeeReturn.name);

    printf("Ingrese el apellido: ");
    fflush(stdin);
    gets(employeeReturn.lastName);

    printf("Ingrese el ID: ");  /** se debe generar automaticamente **/
    fflush(stdin);
    gets(employeeReturn.id);

    printf("Ingrese el sector: ");
    fflush(stdin);
    gets(employeeReturn.sector);

    printf("Ingrese salario: ");
    scanf("%f", &employeeReturn.salary);

    employeeReturn.isEmpty = OCUPADO;

    return employeeReturn;
}

void sortEmployees(Employee listing, int len)
{
    Employee emp[len],aux;
    //int auxEntero;
    int i,j;
    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if((strcmp(emp[i].lastName,emp[j].lastName))<0)
            {
                aux=emp[i];
                emp[i]=emp[j];
                emp[j]=aux;

                /*
                auxEntero = edad[i];
                edad[i] = edad[j];
                edad[j] = auxEntero;

                auxEntero = notas[i];
                notas[i] = notas[j];
                notas[j] = auxEntero;
                */
            }
        }
    }
}

void printEmployee(Employee theEmployee)
{
    printf("%15s %15s %10s %10s %10f %5d\n",theEmployee.lastName, theEmployee.name, theEmployee.id, theEmployee.sector, theEmployee.salary, theEmployee.isEmpty);
}


void cargarArray(Employee listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i]= getEmployee();
    }
}


void mostrarArray(Employee listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(listado[i].isEmpty==OCUPADO)
        {
            printEmployee(listado[i]);
        }


    }
}


void construirArray(Employee listado[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        listado[i].isEmpty= LIBRE;
        listado[i].salary= 0;
        strcpy(listado[i].name, "");
        strcpy(listado[i].lastName, "");
        strcpy(listado[i].id, "");
        strcpy(listado[i].sector, "");
    }
}


int addEmployee(Employee listado[], int tam)
{
    int indice;
    indice= dameLugarLibre(listado, tam);
    if(indice != -1)
    {
        listado[indice]= getEmployee();
    }
    return indice;
}


int dameLugarLibre(Employee listado[], int tam)
{
    int i;
    int index = -1;

    for(i=0; i<tam; i++)
    {
        if(listado[i].isEmpty==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}


int existEmployee(Employee theEmployee,Employee lista[])
{

}


int deleteEmployee(Employee lista[], int tam)
{


 int i;
   char codigo[50];
   int loEncontro = 0;

   printf("Ingrese el ID: ");
   fflush(stdin);
   gets(codigo);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].id, codigo)==0)
       {
          lista[i].isEmpty = LIBRE;
            loEncontro = 1;
           break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

    return 0;
}

void initEmployee(Employee listaProductos[],int tam)
{

    float salary[3]={50000,42300.95,19100.52};
    char name[3][50]={"Alejandro","Franco","Julian"};
    char lastName[3][50]={"Terrabusi","Arcor","Bagley"};

    char id[3][13]={"123","456","789"};

    char sector[3][50]={"1","2","3"};

    int i;

    for(i=0;i<3;i++)
    {
        strcpy(listaProductos[i].id,id[i]);
        strcpy(listaProductos[i].name,name[i]);
        strcpy(listaProductos[i].lastName, lastName[i]);
        strcpy(listaProductos[i].sector, sector[i]);
        listaProductos[i].salary=salary[i];
        listaProductos[i].isEmpty = OCUPADO;
    }
}

int editEmployee(Employee lista[], int tam)
{
   int i;
   char id[50];
   int loEncontro = 0;

   printf("Ingrese el ID: ");
   fflush(stdin);
   gets(id);

   for(i=0; i<tam; i++)
   {
       if(strcmp(lista[i].id, id)==0)
       {
            printf("Ingrese el nuevo NOMBRE: ");
            fflush(stdin);
            gets(lista[i].name);

            printf("Ingrese el nuevo APELLIDO: ");
            fflush(stdin);
            gets(lista[i].lastName);

            printf("Ingrese el nuevo SALARIO: ");
            scanf("%f", &lista[i].salary);
            loEncontro = 1;

            printf("Ingrese el nuevo SECTOR: ");
            fflush(stdin);
            gets(lista[i].sector);



            break;
       }

   }

   if(loEncontro==0)
   {
      printf("Codigo inexistente!!");
   }

   return 0;
}
