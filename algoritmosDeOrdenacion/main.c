#include <stdio.h>
#include <stdlib.h>

#include "tipos.h"

int main()
{
    int numeros[] = {1, 3, 2, 5, -8, 2, 4, 6, 8, 0};
    int tamanyo = sizeof(numeros)/sizeof(numeros[0]);
    burbuja(numeros, tamanyo);
    imprimir(numeros, tamanyo);
    //ordenarMenor();
}

void imprimir(ptr_int array, int tamanyo){

    for(int i = 0; i < tamanyo; i++){

        printf("%i ", array[i]);
    }
}
