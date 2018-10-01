#ifndef BURBUJA_H_INCLUDED
#define BURBUJA_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>

void intercambiar(ptr_int x, ptr_int y);
void intercambiarPosicionesArray(ptr_int array, int posicion1, int posicion2);
void burbuja(int *array, int tamanyo);

#endif // BURBUJA_H_INCLUDED
