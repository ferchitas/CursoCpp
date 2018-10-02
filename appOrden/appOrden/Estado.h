#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Estado
{
public:
	Estado();
	~Estado();

	virtual void cargarPorTeclado();
	virtual void cargarAleatorio();
	virtual void guardarDatos(char* ruta);
	virtual void ordenar();
	virtual ofstream cargarFichero(char* ruta);
};

