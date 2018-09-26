#include <stdio.h>
#include <stdbool.h>
#include "tipos.h"

void intercambiar(ptr_int x, ptr_int y){

    int aux = *y;
    *y = *x;
    *x = aux;
}

void intercambiarPosicionesArray(ptr_int array, int posicion1, int posicion2){

    int aux = array[posicion2];
    array[posicion2] = array[posicion1];
    array[posicion1] = aux;

}

void burbuja(int *array, int tamanyo){

    bool cambiado;
    do{
        cambiado = false;
        for(int i = 0; i < tamanyo; i++){

            if(array[i] > array[i + 1]){

                //intercambiar(&array[i], array + i + 1);
                intercambiarPosicionesArray(array, i, i + 1);
                cambiado = true;
            }
        }
        tamanyo--;

    }while(cambiado);
}
