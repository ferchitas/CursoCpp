#pragma once
#include "Estado.h"
#include "GestorDeDatos.h"
class ConDatos:
	public Estado
{
public:
	ConDatos();
	~ConDatos();

	void setGestor(GestorDeDatos gestor);
	void cargarPorTeclado();
	void cargarAleatorio();
	void guardarDatos(char* ruta);
	void ordenar();
	ofstream cargarFichero(char* ruta);

private:
	GestorDeDatos gestor;
};

