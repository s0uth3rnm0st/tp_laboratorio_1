#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

/*******************************************************************/
/** \brief menu de opciones
 *
 * \param texto[] char leyenda
 * \return int
 *
 */
/*******************************************************************/
int pedirOpcionMenu(char texto[],char opcion[]);

/*******************************************************************/
/** \brief permite ingresar un texto y validar que se trate de datos char
 *
 * \param mensaje[] char leyenda
 * \param input[] char variable
 * \return int
 *
 */
/*******************************************************************/
int getString(char mensaje[],char input[]);

/*******************************************************************/
/** \brief permite verificar si la string analizada es de solo numeros
 *
 * \param str[] char string
 * \return int
 *
 */
/*******************************************************************/
int soloNumeros(char str[]);

/*******************************************************************/
/** \brief permite ingresar un string que contenga solo numeros
 *
 * \param mensaje[] char leyenda
 * \param input[] char variable
 * \return int
 *
 */
/*******************************************************************/
int getStringNumero(char mensaje[],char input[]);

/*******************************************************************/
/** \brief permite ingresar un valor entero
 *
 * \param mensaje[] char leyenda
 * \param input int* variable
 * \return int
 *
 */
/*******************************************************************/
int getInt(char mensaje[], int *input);

/*******************************************************************/
/** \brief permite ingresar un valor float
 *
 * \param mensaje[] char leyenda
 * \param numero float* variable
 * \param tamMin float validacion del minimo valor a ingresar
 * \param tamMax float validacion del maximo valor a ingresar
 * \return void
 *
 */
/*******************************************************************/
void getFloat(char mensaje[],float *numero,float tamMin,float tamMax);

/*******************************************************************/
/** \brief ejecuta a getEmployee(), permitiendo ingresar los datos en los campos del array
 *
 * \param listado[] Employee listado de empleados
 * \param len int tamaño
 * \return void
 *
 */
/*******************************************************************/
void cargarArray(Employee listado[], int len);

/*******************************************************************/
/** \brief muestra una TABLA con los empleados
 *
 * \param listing[] Employee listado de empleados
 * \param len int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int mostrarArray(Employee listing[], int len);

/*******************************************************************/
/** \brief establece todos los lugares del array como libres
 *
 * \param listado[] Employee listado de posiciones del array
 * \param len int tamaño del array
 * \return void
 *
 */
/*******************************************************************/
void construirArray(Employee listado[], int len);

/*******************************************************************/
/** \brief busca un lugar libre dentro del array
 *
 * \param listado[] Employee listado de empleados/posiciones del array
 * \param len int tamaño del array
 * \return int
 *
 */
/*******************************************************************/
int dameLugarLibre(Employee listado[], int len);


#endif // BIBLIOTECA_H_INCLUDED
