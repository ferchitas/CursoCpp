#pragma once
#include "AlgoritmoDeBusqueda.h"
class AlgoritmoAldo :
	public AlgoritmoDeBusqueda
{
public:
	AlgoritmoAldo();
	~AlgoritmoAldo();

	void ejecutar(int numeros[], int tamanyo);
	void calcularTiempos();
};

