#include <stdio.h>
#include <stdlib.h>

#define flotante float
#define entero int
#define devolver return
#define empezar {
#define terminar }

//enumeramos los dias de la semana
enum dia {lunes, martes, miercoles} diaSemana;
enum mes {enero, febrero, marzo};

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

int main()
{
    printf("%i\n\n", triple(3));
    printf("%i\n\n", funcionTernario());
    printf("%d\n\n", lunes);

    diaSemana = martes;
    if(diaSemana != martes){

        printf("hoy no es martes\n\n!");
    }
    else{

        printf("hoy si es martes\n\n");
    }

    /**< para probar la funcion de punteros */
    //printf("%d\n\n", prueba());
    /**< para probar la funcion de arrays */
    prueba_arrays();
    return 0;
}
