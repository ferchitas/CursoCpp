#include "AlgoritmoAldo.h"

extern "C" {

#include "aldoStylCe.h"
};

AlgoritmoAldo::AlgoritmoAldo()
{
}


AlgoritmoAldo::~AlgoritmoAldo()
{
}

void AlgoritmoAldo::ejecutar(int numeros[], int tamanyo) {

	aldoOrdenacion(numeros, tamanyo);
}

void AlgoritmoAldo::calcularTiempos() {


}
