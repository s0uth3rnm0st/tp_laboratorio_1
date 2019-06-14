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
int controller_addEmployee(LinkedList* pArrayListEmployee) //AGREGADO PARAM PATH PARA PODER ABRIR EL ARCHIVO Y ESCRIBIR EN EL
{
    if(ll_isEmpty(pArrayListEmployee)==0)
    {
        int retorno=0;
        Employee* theEmployee;
        if(pArrayListEmployee!=NULL)
        {
            theEmployee=employee_new();
            //employee_setId(theEmployee,1004);
            int* id;
            int* sueldo;
            int* horasTrabajadas;
            char* nombre;
            //employee_getId(theEmployee,id);//autoincremental
            id=ll_len(pArrayListEmployee)+1;
            employee_setId(theEmployee,id);
            while(employee_getNombre(theEmployee,&nombre)==0)
            {
                printf("ERROR, re");
            }
            while(employee_getHorasTrabajadas(theEmployee,horasTrabajadas)==0)
            {
                printf("ERROR, re");
            }
            while(employee_getSueldo(theEmployee,sueldo)==0)
            {
                printf("ERROR, re");
            }
            //printf("%d--%s--%d--%d\n",theEmployee->id,theEmployee->nombre,theEmployee->horasTrabajadas,theEmployee->sueldo);

            ll_add(pArrayListEmployee,theEmployee);
            retorno=1;
        }

        return retorno;
    }
    else
    {
        printf("aun no se cargo el archivo!!\n");
    }

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
    int retorno = 0;
    if(ll_isEmpty(pArrayListEmployee)==0)
    {
        if (pArrayListEmployee!=NULL)
        {
            int len = ll_len(pArrayListEmployee);
            if (len>0)
            {
                int i;
                int id;
                while(getInt("Ingrese el ID del empleado a modificar: ",&id)==0)
                {
                    printf("Error, ingrese un dato valido");
                }

                for (i=0 ; i<len ; i++)
                {
                    Employee* aux = (Employee*) ll_get(pArrayListEmployee,i);
                    //printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
                    if(id==aux->id)
                    {
                        int* id;
                        int* sueldo;
                        int* horasTrabajadas;
                        char* nombre;
                        id=ll_len(aux)+1;
                        while(employee_getNombre(aux,&nombre)==0)
                        {
                            printf("ERROR, re");
                        }
                        while(employee_getHorasTrabajadas(aux,horasTrabajadas)==0)
                        {
                            printf("ERROR, re");
                        }
                        while(employee_getSueldo(aux,sueldo)==0)
                        {
                            printf("ERROR, re");
                        }
                    }
                }
                if (i==len)
                {
                    retorno = 1;
                }
            }
        }
    }
    else
    {
       printf("aun no se cargo el archivo!!\n");
    }

    return retorno;
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
    int retorno = 0;
    if(ll_isEmpty(pArrayListEmployee)==0)
    {
        if (pArrayListEmployee!=NULL)
        {
            int len = ll_len(pArrayListEmployee);
            if (len>0)
            {
                int i;
                int id;
                while(getInt("Ingrese el ID del empleado a dar de baja: ",&id)==0)
                {
                    printf("Error, ingrese un dato valido");
                }

                for (i=0 ; i<len ; i++)
                {
                    Employee* aux = (Employee*) ll_get(pArrayListEmployee,i);
                    //printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);
                    if(id==aux->id)
                    {
                        printf("Aca");
                        ll_remove(pArrayListEmployee,i);
                    }
                }
                if (i==len)
                {
                    retorno = 1;
                }
            }
        }
    }
    else
    {
        printf("aun no se cargo el archivo!!\n");
    }

    return retorno;
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
    if(ll_isEmpty(pArrayListEmployee)==0)
    {
        if (pArrayListEmployee!=NULL)
        {
            int len = ll_len(pArrayListEmployee);
            if (len>0)
            {
                int i;
                //Employee* aux = NULL;

                printf("ID--NOMBRE--HORAS--SUELDO\n");
                for (i=0 ; i<len ; i++)
                {
                    Employee* aux = (Employee*) ll_get(pArrayListEmployee,i);
                    printf("%d--%s--%d--%d\n",aux->id,aux->nombre,aux->horasTrabajadas,aux->sueldo);//no usar flechas
                }
                if (i==len)
                {
                    retorno = 1;
                }
            }
            int llLen;
            llLen=ll_len(pArrayListEmployee);
            printf("HAY %d ELEMENTOS EN LA LL\n",llLen);
            return retorno;
        }
    }
    else
    {
        printf("aun no se cargo el archivo!!\n");
    }


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

