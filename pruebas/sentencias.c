#include <stdio.h>

int menu(){

    printf("Seleccionar una opcion, s para salir:\n");
    char opcion = getchar();
    printf("Ha seleccionado %c \n", opcion);
    switch(opcion){

    case 'a':
        printf("Seleccionado a.\n");
        break;
    case 'b':
        printf("Seleccionado b.\n");
        break;
    default:
        printf("selecionar entre a o b.\n");
    }

    return opcion;
}
