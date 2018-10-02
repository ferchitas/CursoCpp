// appOrden.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>

extern "C" {

	#include "burbuja.h"
	#include "aldoStylCe.h"
	#include "insercionC.h"
};

void imprimir(ptr_int array, int tamanyo);

int main()
{
	int numeros[] = { 1, 3, 2, 5, -8, 2, 4, 0, 8 };
	int tamanyo = sizeof(numeros) / sizeof(numeros[0]);
	//burbuja(numeros, tamanyo);
	insercion(numeros, tamanyo);
	//aldoOrdenacion(numeros, tamanyo);
	imprimir(numeros, tamanyo);

}

void imprimir(ptr_int array, int tamanyo) {

	for (int i = 0; i < tamanyo; i++) {

		printf("%i ", array[i]);
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
