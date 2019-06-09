#include <stdio.h>
#include <stdlib.h>

#include "biblioteca.h"

int getString(char mensaje[],char* input)
{
    int i;
    int retorno=1;

    printf(mensaje);
    fflush(stdin);
    gets(input);

    for(i=0;i<strlen(input);i++)
    {
        if((input[i]<'a' || input[i]>'z') && (input[i]<'A' || input[i]>'Z'))
        {
            retorno=0;
            break;
        }
    }

    return retorno;
}

