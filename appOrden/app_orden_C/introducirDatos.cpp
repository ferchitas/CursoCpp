#include "pch.h"
#include "introducirDatos.h"

StArrayDatos * IntroDatos()
{
	cout << "Introducir datos:" << endl;
	int op_elegida = 0;
	StArrayDatos * arr = NULL;
	string textos[] = { "Generar datos", "Generar datos aleatorios" };
	do {

		op_elegida = menu(2, textos);
		switch (op_elegida)
		{
		case 2:
			arr = generadorArray(5);
			mostrarArray(arr);
		default:
			break;
		}
	} while (op_elegida != 0);
	return arr;
}

StArrayDatos * generadorArray(int tamanyo)
{
	StArrayDatos * arrayDatos = (StArrayDatos *)malloc(sizeof(StArrayDatos));
	int * array = (int *)malloc(sizeof(int) * tamanyo);

	arrayDatos->ptrArray = array;
	arrayDatos->tamanyo = tamanyo; //tambien se puede hacer asi (* arrayDatos).tamanyo = tamanyo;. Con la flecha se accede al contenido de una estructura en caso de que sea un puntero, como es este caso.
	
	srand(time_t());
	for (int i = 0; i < tamanyo; i++)
	{
		
		arrayDatos->ptrArray[i] = 1 + rand() % 100;
	}
	return arrayDatos;
}

void mostrarArray(StArrayDatos * arr)
{
	for (int i = 0; i < arr->tamanyo; i++)
	{
		cout << arr->ptrArray[i] << " - " << ((i % 5 <  4) ? " " : "\n");
	}
}
