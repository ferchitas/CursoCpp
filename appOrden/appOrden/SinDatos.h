#pragma once
#include "Estado.h"
#include "GestorDeDatos.h"
class SinDatos :
	public Estado
{
public:
	SinDatos();
	~SinDatos();

	void setGestor(GestorDeDatos gestor);
	void cargarPorTeclado();
	void cargarAleatorio();
	void guardarDatos(char* ruta);
	void ordenar();
	ofstream cargarFichero(char* ruta);

private:
	GestorDeDatos gestor;
};

