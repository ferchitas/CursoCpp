#include <iostream>
#include <stdio.h>
#include "tipos.h"

using namespace std;

extern "C" {

    #include "burbuja.h"
};

int main()
{
    int numeros[] = {1, 3, 2, 5, -8, 2, 4, 0, 8};
    int tamanyo = sizeof(numeros)/sizeof(numeros[0]);
    burbuja(numeros, tamanyo);
    cout << "Algoritmo de ordenacion:\n" << endl;
    return 0;
}

void imprimir(ptr_int array, int tamanyo){

    for(int i = 0; i < tamanyo; i++){

        printf("%i ", array[i]);
    }
}
