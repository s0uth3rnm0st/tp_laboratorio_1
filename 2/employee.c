#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000

#include "employee.h"


int getString(char mensaje[],char input[])
{
    int i;
    int retorno=1;

    printf(mensaje);
    fflush(stdin);
    gets(input);

    for(i=0;i<strlen(input);i++)
    {
        if((input[i]<'a' || input[i]>'z') && (input[i]<'A' || input[i]>'Z'))
        {
            retorno=0;
            break;
        }
    }

    return retorno;
}

int getInt(char mensaje[], int *input)
{
    char ingreso[50];
    int retorno=0;
    int flag=1;
    int auxiliar=0;
    int i;
    printf(mensaje);
    scanf("%s",&ingreso);

    for(i=0;i<=strlen(ingreso);i++)
    {
        if(ingreso[i]=='.')
        {
            flag=0;
            break;
        }
    }

    auxiliar=atoi(ingreso);

    if(auxiliar>0 && flag==1)
    {
        *input=auxiliar;
        retorno=1;
    }

    return retorno;
}

void getFloat(char mensaje[],float *numero,float tamMin,float tamMax)
{
    char ingreso[50];
    int retorno=0;
    int flag=0;
    float auxiliar;
    int i;

    do
    {
        printf(mensaje);
        fflush(stdin);
        gets(ingreso);

        for(i=0;i<=strlen(ingreso);i++)
        {
            if(ingreso[i]=='.')
            {
                flag++;

                if(flag==2)
                {
                    break;
                }
            }
        }

        auxiliar=atof(ingreso);

        if(auxiliar>=tamMin && auxiliar<=tamMax &&flag!=2)
        {
            *numero=auxiliar;
            retorno=1;

        }
        if(retorno==0)
        {
            printf("error\n");
        }

    }while(retorno==0);

}

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

    printf("Ingrese el ID: ");                                                                      /** se debe generar automaticamente **/
    fflush(stdin);
    gets(employeeReturn.id);

    while(getInt("ingrese el sector: ",&employeeReturn.sector)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    getFloat("ingrese el salario: ", &employeeReturn.salary, MIN, MAX);

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
    sortEmployees(theEmployee, 10);
    printf("%15s %15s %10s %10d %10f %5d\n",theEmployee.lastName, theEmployee.name, theEmployee.id, theEmployee.sector, theEmployee.salary, theEmployee.isEmpty);
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
        listado[i].sector= 0;
    }
}


int addEmployee(Employee listado[], int len)
{
    int indice;
    indice= dameLugarLibre(listado, len);
    if(indice != -1)
    {
        listado[indice]= getEmployee();
    }
    return indice;
}


int dameLugarLibre(Employee listado[], int len)
{
    int i;
    int index = -1;

    for(i=0; i<len; i++)
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

    int sector[3]={1,2,3};

    int i;

    for(i=0;i<3;i++)
    {
        strcpy(listaProductos[i].id,id[i]);
        strcpy(listaProductos[i].name,name[i]);
        strcpy(listaProductos[i].lastName, lastName[i]);
        listaProductos[i].sector= sector[i];
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
            while(getString("ingrese el nombre: ",lista[i].name)==0)
            {
                printf("ERROR, ingrese un dato valido\n");
            }

            while(getString("ingrese el apellido: ",lista[i].lastName)==0)
            {
                printf("ERROR, ingrese un dato valido\n");
            }

            printf("Ingrese el ID: ");
            fflush(stdin);
            gets(lista[i].id);

            while(getInt("ingrese el sector: ",lista[i].sector)==0)
            {
                printf("ERROR, ingrese un dato valido\n");
            }

            getFloat("ingrese el salario: ", &lista[i].salary, MIN, MAX);


            break;
       }

   }

   if(loEncontro==0)
   {
      printf("ID inexistente!!\n");
   }

   return 0;
}

void salaryTotal (Employee listing[], int len)
{

}
