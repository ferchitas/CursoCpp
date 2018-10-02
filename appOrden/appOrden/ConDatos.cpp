#include "ConDatos.h"



ConDatos::ConDatos()
{
}


ConDatos::~ConDatos()
{
}

void ConDatos::setGestor(GestorDeDatos gestor)
{
	this->gestor = gestor;
}

void ConDatos::cargarPorTeclado()
{
}

void ConDatos::cargarAleatorio()
{
}

void ConDatos::guardarDatos(char * ruta)
{
}

void ConDatos::ordenar()
{
}

ofstream ConDatos::cargarFichero(char * ruta)
{
	return ofstream();
}
