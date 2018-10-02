/**< algoritmo que se le ocurrio a aldo (quizas ya exista pero nadie sabia el nombre)
1, 3, 2, 5, -8, 2, 4, 6, 8, 0*/

#include <limits.h>
#include "tipos.h"

void aldoOrdenacion(int *array, int tamanyo){

    int contadorMayor = 0;
    int i = 0;
    ///para cada numero.
    while(i < tamanyo){

        ///lo comparamos con todos los demas por delante del i.
        for(int j = i; j < tamanyo; j++){

            ///si el de i es mayor que el de j aumentamos el contador.
            if(array[i] > array[j]){

                contadorMayor++;
            }
        }
        ///es necesario para hacer los intercambios, en caso de que no haya ninguno
        ///significa que no quedan por delante numeros menores, por eso aumentamos i.
        if(contadorMayor > 0){

            ///if necesario para poder controlar el caso de que tengamos mas de un numero igual
            /// en caso de que las posiciones sean iguales estas posiciones sean diferentes (hemos detectado dos iguales)
            ///metemos el numero uno mas adelante de el que es gual.
            ///todo esto es necesario para evitar entrar en un bucle infinito.
            if(i != contadorMayor && array[i] == array[contadorMayor]){

                intercambiarPosicionesArray(array, i, contadorMayor + 1);
            }
            else{

                intercambiarPosicionesArray(array, i, contadorMayor);
            }
            ///ponemos el contador de elementos menores a 0 para empezar de nuevo
            contadorMayor = 0;
        }
        else {
            i++;
        }
    }
}
