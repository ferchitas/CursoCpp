// app_orden_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

StArrayDatos * ejecutarMenu(int opcion, StArrayDatos * arr);

int main()
{
	string textos[] = { "Introducir datos",
		"Guardar datos",
		"Cargar datos",
		"Ordenar datos" };
	StArrayDatos * arr = NULL;
	int opcionSeleccionada = 0;
	do {

		opcionSeleccionada = menu(4, textos);
		arr = ejecutarMenu(opcionSeleccionada, arr);

	} while (opcionSeleccionada != 0);
}

StArrayDatos * ejecutarMenu(int opcion, StArrayDatos * arr) {

	switch (opcion)
	{
	case 1:
		arr = IntroDatos();
		break;
	case 2:  
		ordenar(0, arr);
	default:
		break;
	}
	return arr;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file