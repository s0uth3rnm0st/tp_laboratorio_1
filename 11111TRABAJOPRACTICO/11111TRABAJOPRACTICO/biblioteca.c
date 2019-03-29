#include "biblioteca.h"


int pedirOpcionMenu(char texto[])
    {
     int opcion;

        printf("%s",texto);

        printf("elija una opcion: ");
        scanf("%d",&opcion);

        return opcion;
    }


