#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

int pedirOpcionMenu(char texto[],char opcion[]);

int getString(char mensaje[],char* input);

int getInt(char mensaje[], int *input);

int getStringNumero(char mensaje[],char input[]);

int soloNumeros(char str[]);

#endif // BIBLIOTECA_H_INCLUDED
