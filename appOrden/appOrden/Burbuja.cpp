#include "Burbuja.h"

extern "C" {

#include "burbujaC.h"
};

Burbuja::Burbuja()
{
}


Burbuja::~Burbuja()
{
}

void Burbuja::ejecutar(int numeros[], int tamanyo) {

	burbuja(numeros, tamanyo);
}

void Burbuja::calcularTiempos() {


}