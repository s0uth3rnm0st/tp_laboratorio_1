#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1



typedef struct
{
    int isEmpty;
    float salary;
    char name[50];
    char lastName[50];
    int id;
    int sector;
}Employee;

/*******************************************************************/
/** \brief permite ingresar los datos a cargar en el array
 *
 * \return Employee
 *
 */
/*******************************************************************/
Employee getEmployee();

/*******************************************************************/
/** \brief Hardcode de empleados (IGNORAR ESTA FUNCION)
 *
 * \param Employee[]  array
 * \param int tamaño del array
 * \return void
 *
 */
/*******************************************************************/
void initEmployee(Employee[],int);

/*******************************************************************/
/** \brief ordena alfabeticamente y por sector a los empleados
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return void
 *
 */
/*******************************************************************/
void sortEmployees(Employee listing[], int len);

/*******************************************************************/
/** \brief un printf con los datos de cade empleado
 *
 * \param Employee listado de empleados
 * \return void
 *
 */
/*******************************************************************/
void printEmployee(Employee);

/*******************************************************************/
/** \brief ejecuta getEmployee(), permitiendo ingresar los datos de los campos
 *
 * \param [] Employee listado de empleados
 * \param int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int addEmployee(Employee [], int );

/*******************************************************************/
/** \brief verifica si el array esta lleno
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int fullArray(Employee listing[],int len);

/*******************************************************************/
/** \brief verifica si el empleado solicitado existe
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int existEmployee(Employee listing[],int len);

/*******************************************************************/
/** \brief realiza los calculos soliciados en las consignas del TP, para luego informarlos
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return void
 *
 */
/*******************************************************************/
void arrayInformation(Employee listing[], int len);

/*******************************************************************/
/** \brief permite borrar un empleado del sistema
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int deleteEmployee(Employee listing[], int len);

/*******************************************************************/
/** \brief permite editar los datos de un empleado
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int editEmployee(Employee listing[], int len);




