#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int getInt(char text[],int* input)
{
    char aux[80];
    int flag=1;

    printf("%s",text);
    gets(aux);
    int i;
    for(i=0;i<strlen(aux);i++)
    {
        if(aux[i]<'0' || aux[i]>'9')
        {
            flag=0;
            break;
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

int getFloat(char text[],float* input)
{
    char aux[80];
    int flag=1;
    int contador=0;

    printf("%s",text);
    gets(aux);
    int i;
    for(i=0;i<strlen(aux);i++)
    {
        if((aux[i]<'0' || aux[i]>'9') && aux[i]!='.')
        {
            flag=0;
            break;
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

int getString_NoSpaces(char text[],char* input)
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


}

