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

float pedirOperando(char texto[]);

float calcularOperaciones(char texto[]);

#endif // BIBLIOTECA_H_INCLUDED
