/**< algoritmo que se le ocurrio a aldo (quizas ya exista pero nadie sabia el nombre)
1, 3, 2, 5, -8, 2, 4, 6, 8, 0*/

#include <limits.h>
#include "tipos.h"

void aldoOrdenacion(int *array, int tamanyo){

    int contadorMayor = 0;
    int valorMenor = INT_MAX;
    int indiceMenor = 0;
    int i = 0;
    while(i < tamanyo){

        for(int j = 0; j < tamanyo; j++){

            if(array[i] >= array[j]){

                contadorMayor++;
            }
        }
        i++;
        if(contadorMayor != 0){

            intercambiarPosicionesArray(array, i, contadorMayor);
            contadorMayor = 0;
            i = 0;
        }

    }
}
