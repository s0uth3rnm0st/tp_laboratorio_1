#include <string.h>
#include <stdio.h>
#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

int menu(char* text,char* option,int* min, int* max);

int getInt(char* text,int* input);
int getFloat(char* text,float* input);
int getString_Spaces(char* text,char* input);
int getString_NoSpaces(char* text,char* input);
int getString_IntNumber(char* text,char* input);

#endif // BIBLIOTECA_H_INCLUDED
