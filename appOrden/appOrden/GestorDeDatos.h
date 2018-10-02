#pragma once
#include<iostream>
#include<fstream>
#include "AlgoritmoDeBusqueda.h"
#include "Estado.h"

using namespace std;

class GestorDeDatos
{
public:
	GestorDeDatos(int numeroElementos);
	~GestorDeDatos();

	void cargarPorTeclado();
	void cargarAleatorio();
	void guardarDatos(char* ruta);
	void ordenar();
	ofstream cargarFichero(char* ruta);

	int* getElementos();

private:
	int numeroDeElementos;
	int* elementos;
	AlgoritmoDeBusqueda algoritmo;
	Estado estado;

};

