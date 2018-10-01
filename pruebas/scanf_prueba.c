#include <stdio.h>
#include <stdlib.h>

void probando_I_O(){

    int n;
    double dist;
    char nombre[20];
    printf("Introducir un entero, un dabel y una cadena de caracter (no mas de 20 :D)");
    scanf("%i%lf", &n, &dist);
    fflush(stdin);
    gets(nombre);
    printf("Entero: %d, davel: %f, cadena: %s", n, dist, nombre);
}
