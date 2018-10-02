#pragma once
class AlgoritmoDeBusqueda
{
public:
	AlgoritmoDeBusqueda();
	~AlgoritmoDeBusqueda();

	virtual void ejecutar(int numeros[], int tamanyo);
	virtual void calcularTiempos();
};