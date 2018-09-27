#include <limits.h>

int menorDesde(int numeros[], int posicion, int tamanyo){

    int minimo = INT_MAX;
    int contadorVueltas = 0;
    for(int i = posicion; i < tamanyo; i++){

        contadorVueltas++;
        if(numeros[i] <= minimo){

            minimo = numeros[i];
            numeros[i] = numeros[posicion];
            numeros[posicion] = minimo;
        }
    }
}

void insercion(int numeros[], int tamanyo){

    int contadorVueltas = 0;
    for(int i = 0; i < tamanyo; i++){

        contadorVueltas = menorDesde(numeros, i, tamanyo);
    }
    printf("\nvueltas: %i\n", contadorVueltas);
}
