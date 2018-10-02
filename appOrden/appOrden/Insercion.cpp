#include "Insercion.h"

extern "C" {

#include "insercionC.h"
};

Insercion::Insercion()
{
}


Insercion::~Insercion()
{
}

void Insercion::ejecutar(int numeros[], int tamanyo) {

	insercion(numeros, tamanyo);
}

void Insercion::calcularTiempos() {


}