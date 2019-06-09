#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "biblioteca.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    int retorno = 0;
    if (path!=NULL&&pArrayListEmployee!=NULL)
    {
        printf("Archivo abierto exitosamente!!\n\n");
        FILE* pFile = NULL;
        pFile = fopen(path,"r");
        if (pFile!=NULL)
        {
            retorno = parser_EmployeeFromText(pFile,pArrayListEmployee);
        }
        fclose(pFile);
    }
    return retorno;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{


    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(char* path, LinkedList* pArrayListEmployee) //AGREGADO PARAM PATH PARA PODER ABRIR EL ARCHIVO Y ESCRIBIR EN EL
{
    int retorno = 0;
    if (path!=NULL&&pArrayListEmployee!=NULL)
    {
        printf("Archivo abierto exitosamente!!\n\n");
        FILE* pFile = NULL;
        pFile = fopen(path,"a");
        if (pFile!=NULL)
        {
            //retorno = parser_EmployeeFromText(pFile,pArrayListEmployee);
            //char texto[]="1001,Ignacio,2,20000\n"; //usar getters con strcat
            char id[50];
            char nombre[50];
            char horasTrabajadas[50];
            char sueldo[50];
            gets(id);
            gets(nombre);
            gets(horasTrabajadas);
            gets(sueldo);

            //char texto[500];
            //texto=id;
            strcat(id,",");
            strcat(id,nombre);
            strcat(id,",");
            strcat(id,horasTrabajadas);
            strcat(id,",");
            strcat(id,sueldo);
            strcat(id,"\n");

            int largo= strlen(id);
            fwrite(id, sizeof(char),largo,pFile);
        }
        fclose(pFile);
        retorno=1;
    }

    return retorno;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    int retorno = 0;

    if (pArrayListEmployee!=NULL)
    {
        int len = ll_len(pArrayListEmployee);
        if (len>0)
        {
            int i;
            //Employee* aux = NULL;

            for (i=0 ; i<len ; i++)
            {
                Employee* aux = (Employee*) ll_get(pArrayListEmployee,i);
                printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
            }
            if (i==len)
            {
                retorno = 1;
            }
        }
    }
    return retorno;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

