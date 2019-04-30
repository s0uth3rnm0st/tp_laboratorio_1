#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define S 10
#include "biblioteca.h"

int main()
{

    int option;

    sEmployee aEmployee;
    sEmployee employeeListing[S];

    do
    {
        printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.INFORMAR\nElija opcion: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1:
                insertEmployee(employeeListing, S);
                break;
            /*case 2:
                borrarProducto(listadoProductos,T);
                break;
            case 3:
                editarProducto(listadoProductos, T);
                break;

            case 4:
                mostrarArray(listadoProductos,T);
                break;*/
        }
    }while(option!=10);

    return 0;
}
