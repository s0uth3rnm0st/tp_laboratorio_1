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
            printf("ERROR\n");
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        *input=atoi(aux);
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

