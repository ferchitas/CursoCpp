#include <limits.h>

void menorDesde(int numeros[], int posicion, int tamanyo){

    int minimo = INT_MAX;
    for(int i = posicion; i < tamanyo; i++){

        if(numeros[i] <= minimo){

            minimo = numeros[i];
            numeros[i] = numeros[posicion];
            numeros[posicion] = minimo;
        }
    }
}

void insercion(){

    int numeros[] = {1, 3, -2, 5, 8, 2, 4, 6, 8, 0};
    int tamanyo = sizeof(numeros)/sizeof(numeros[0]);
    for(int i = 0; i < tamanyo; i++){

        menorDesde(numeros, i, tamanyo);
    }
    for(int i = 0; i < tamanyo; i  ++){

        printf("%d ", numeros[i]);
    }
}
