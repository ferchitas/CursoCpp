#include "GestorDeDatos.h"

using namespace std;


GestorDeDatos::GestorDeDatos(int numeroElementos)
{
	this->elementos = (int*)malloc(numeroElementos * sizeof(int));
}


GestorDeDatos::~GestorDeDatos()
{
}

ofstream GestorDeDatos::cargarFichero(char * ruta)
{
	return estado.cargarFichero(ruta);
}

int* GestorDeDatos::getElementos()
{
	return this->elementos;
}

void GestorDeDatos::cargarPorTeclado()
{
	estado.cargarPorTeclado();
}

void GestorDeDatos::cargarAleatorio()
{
	estado.cargarAleatorio();
}

void GestorDeDatos::guardarDatos(char * ruta)
{
	estado.guardarDatos(ruta);
}

void GestorDeDatos::ordenar()
{
	estado.ordenar();
}