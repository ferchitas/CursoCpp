#pragma once

#include "AlgoritmoDeBusqueda.h"

class Insercion :
	public AlgoritmoDeBusqueda
{
public:
	Insercion();
	~Insercion();
	void ejecutar(int numeros[], int tamanyo);
	void calcularTiempos();
};