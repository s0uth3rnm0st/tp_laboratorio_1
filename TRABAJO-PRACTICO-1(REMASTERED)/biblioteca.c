#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int menu(char* text,char* option,int* min, int* max)
{
    int flag=1;
    int aux;

    printf("%s",text);
    if(getString_IntNumber("Ingrese La OPCION: ",option)==0)
    {
       flag=0;
    }

    aux=atoi(option);
    if(aux<min || aux>max)
    {
        flag=0;
    }

    if(flag==0)
    {
        printf("Ingrese una opcion valida!!\n");
    }

    if(flag==1)
    {
        flag=aux;
    }

    return flag;
}

int getInt(char* text,int* input) //no funciona con asd2 por ejemplo
{
    char aux[80];
    int flag=0;

    printf("%s",text);
    gets(aux);
    int i;
    for(i=0;i<strlen(aux);i++)
    {
        if((aux[i]>='0' && aux[i]<='9'))
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        *input=atoi(aux);
    }
    else
    {
        printf("ERROR\n");
    }

    return flag;
}

int getFloat(char* text,float* input) //no funciona con asd2 por ejemplo ni con "." solamente
{
    char aux[80];
    int flag=0;
    int contador=0;

    printf("%s",text);
    gets(aux);
    int i;
    for(i=0;i<strlen(aux);i++)
    {
        if((aux[i]>='0' && aux[i]<='9') || aux[i]=='.')
        {
            flag=1;
            //break;
        }
        if(aux[i]=='.')
        {
            contador++;
        }
    }
    if(contador>1)
    {
        flag=0;
    }

    if(flag==1)
    {
        *input=atof(aux);
    }
    else
    {
        printf("ERROR\n");
    }

    return flag;
}

int getString_Spaces(char* text,char* input)
{
    int flag=0;
    char aux[80];
    printf("%s",text);
    gets(aux);
    //printf("%s",aux);

    int i;
    for(i=0;i<strlen(aux);i++)
    {
        if((aux[i]>='a' && aux[i]<='z') || (aux[i]>='A' && aux[i]<='Z'))
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        strcpy(input,aux);
    }
    else
    {
        printf("ERROR\n");
    }

    return flag;
}

int getString_NoSpaces(char* text,char* input) //no funciona al poner " " solamente
{
    int flag=1;
    char aux[80];
    int contador=0;
    printf("%s",text);
    fflush(stdin);
    gets(aux);
    //printf("%s",aux);

    int i;
    for(i=0;i<strlen(aux);i++)
    {
        contador++;
        if((aux[i]<'a' || aux[i]>'z') && (aux[i]<'A' || aux[i]>'Z'))
        {
            flag=0;
            break;
        }
    }
    if(contador<1)
    {
        flag=0;
    }

    if(flag==1)
    {
        strcpy(input,aux);
    }
    else
    {
        printf("ERROR\n");
    }

}

int getString_IntNumber(char* text,char* input)
{
    int flag=1;
    char aux[80];
    int contador=0;
    printf("%s",text);
    fflush(stdin);
    gets(aux);

    int i;
    for(i=0;i<strlen(aux);i++)
    {
        contador++;
        if((aux[i]<'0' || aux[i]>'9'))
        {
            flag=0;
            break;
        }
    }
    if(contador<1)
    {
        flag=0;
    }

    if(flag==1)
    {
        strcpy(input,aux);
    }
    else
    {
        printf("ERROR\n");
    }

    return flag;
}

float factorialNum(float* n)
{
    float resp;
    printf("%f",n);

    resp = *n * 3;
    //resp = *n * factorialNum(&n-1);

    if(n==1)
    {
        resp=1;
    }                                                       //ARREGLAR
    else
    {
        printf("no");
    }
    return resp;
}

