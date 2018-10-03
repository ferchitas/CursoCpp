#include "pch.h"

extern "C" {

#include "burbujaC.h"
};

void ordenar(int opcion, StArrayDatos * arr) {

	burbuja(arr->ptrArray, arr->tamanyo);
 	mostrarArray(arr);
}