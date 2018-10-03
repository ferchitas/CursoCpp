#include "pch.h"

using namespace std;

int menu(int numeroOpciones, string opciones[]) {

	int opcion;
	

	do {
		opcion = 0;
		cout << "seleccionar una opcion:" << endl;
		for (int i = 0 ; i < numeroOpciones; i++)
			{
				cout << (i + 1) << " - " << opciones[i] << endl;
			}
		cout << "0 - Salir." << endl;
		cin >> opcion;
	} while (opcion < 0 || opcion > numeroOpciones);
	
	return opcion;
}