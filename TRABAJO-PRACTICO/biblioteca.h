#include <stdio.h>
#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED
/***********************************************/
/** \brief muestra menu de opciones
 *
 * \param texto[] char el texto con las opciones
 * \return int la opcion elegida
 *
 */
 /***********************************************/

int pedirOpcionMenu(char texto[]);

int suma(int datoA, int datoB, float *resultado);

int dividir(int datoA, int datoB, float *resultado);

int pedirDato(int *dato);

int resta(int datoA, int datoB, float *resultado);

int multiplicacion(int datoA, int datoB, float *resultado);

int sacarFactorialDatoA (int datoA);


//error con los numeros con coma, no los lee y traba el programa, arreglar...


#endif // BIBLIOTECA_H_INCLUDED
