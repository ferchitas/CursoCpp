#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "enums.h"

#define flotante float
#define entero int
#define devolver return
#define empezar {
#define terminar }

//funcion que calcula el triple y con los define hace
entero triple(flotante numero){

    empezar
        devolver numero * 3;
    terminar
}

//funcion para probar el operador ternario
int funcionTernario(){

    return (2<3)?0:1;
}

            minimo = numeros[i];

int main()
{
    char opcion = 1;
    printf("%i\n\n", triple(3));
    printf("%i\n\n", funcionTernario());

    /**< para probar la funcion de punteros */
    //printf("%d\n\n", prueba());
    /**< para probar la funcion de arrays */
    //prueba_arrays();
    /**< para probar el menu */
    /*while(opcion != 's'){

        opcion = menu();
    }

    do{

        opcion = menu();
    }while(opcion != 's')


    for(;opcion != 's';){

        opcion = menu();
    }*/

    //probarEnumerados();
    //probarEnumAlumnos();


    return 0;
}
