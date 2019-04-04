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




/***********************************************/
/** \brief pide el operando
 *
 * \param dato float* el operando que entra
 * \return float 0 o 1
 *
 */
 /***********************************************/
float pedirDato(float *dato);




/***********************************************/
/** \brief realiza la operacion de suma
 *
 * \param datoA float entra el primer operando
 * \param datoB float entra el segundo operando
 * \param resultado float* un resultado
 * \return float
 *
 */
/***********************************************/
int suma(int datoA, int datoB, float *resultado);




/***********************************************/
/** \brief realiza la operacion de division
 *
 * \param datoA int entra el primer operando
 * \param datoB int entra el segundo operando
 * \param resultado float* el resultado
 * \return int si se pudo hacer (0 o 1)
 *
 */
/***********************************************/
int dividir(int datoA, int datoB, float *resultado);




/***********************************************/
/** \brief realiza la operacion de resta
 *
 * \param datoA int entra el primer operando
 * \param datoB int entra el segundo operando
 * \param resultado float* el resultado
 * \return int
 *
 */
/***********************************************/
int resta(int datoA, int datoB, float *resultado);




/***********************************************/
/** \brief realiza la operacion de multiplicacion
 *
 * \param datoA int entra el primer operando
 * \param datoB int entra el primer operando
 * \param resultado float* el resultado
 * \return int
 *
 */
/***********************************************/
int multiplicacion(int datoA, int datoB, float *resultado);




/***********************************************/
/** \brief saca el factorial de los operandos
 *
 * \param el operando a sacar el factorial
 * \return la respuesta o 0 o 1
 *
 */
/***********************************************/
int factorial (int dato);

#endif // BIBLIOTECA_H_INCLUDED
