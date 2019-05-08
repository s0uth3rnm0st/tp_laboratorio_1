#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

int getString(char mensaje[],char input[]);
int soloNumeros(char str[]);
int getStringNumero(char mensaje[],char input[]);
int getInt(char mensaje[], int *input);
void getFloat(char mensaje[],float *numero,float tamMin,float tamMax);
void cargarArray(Employee listado[], int cant);
int mostrarArray(Employee listado[], int cant);
void construirArray(Employee listado[], int cant);
int dameLugarLibre(Employee listado[], int len);

#endif // BIBLIOTECA_H_INCLUDED
