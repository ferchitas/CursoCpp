#pragma once

#include "AlgoritmoDeBusqueda.h"

class Burbuja :
	public AlgoritmoDeBusqueda
{
public:
	Burbuja();
	~Burbuja();

	void ejecutar(int numeros[], int tamanyo);
	void calcularTiempos();
};