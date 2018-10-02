#include "SinDatos.h"
#include <cstdlib>

SinDatos::SinDatos()
{
	gestor = NULL;
}


SinDatos::~SinDatos()
{
}

void SinDatos::setGestor(GestorDeDatos gestor)
{
	this->gestor = gestor;
}

void SinDatos::cargarPorTeclado()
{
	
}

void SinDatos::cargarAleatorio()
{
	for (int elemento : this->gestor.getElementos())
	{

	}
}

void SinDatos::guardarDatos(char * ruta)
{
}

void SinDatos::ordenar()
{
}

ofstream SinDatos::cargarFichero(char * ruta)
{
	return ofstream();
}