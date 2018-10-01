#include <stdio.h>
#include <stdlib.h>

struct fichero{

    char dato1[20];
    int *valor1;
    char dato2[20];
    int *valor2;
    char dato3[20];
    char valor3[20];
};



void escribirEnFichero(){

    FILE *pf = fopen("../ejemplos/ejemplo.txt", "w");
    int n;
    double dist;
    char nombre[20];
    struct fichero fejemplo[2];
    fejemplo[1].valor1  = malloc(4);
    fejemplo[1].valor2  = malloc(4);
    printf("Introducir un entero, un dabel y una cadena de caracter (no mas de 20 :D)");
    scanf("%i%lf", &n, &dist);
    fflush(stdin);
    gets(nombre);
    fprintf(pf, "Entero: %d, davel: %f, cadena: %s", n, dist, nombre);
    fclose(pf);

    pf = fopen("../ejemplos/ejemplo.txt", "r");
    fscanf(pf, "%s", fejemplo[1].dato1);
    fscanf(pf, "%i", fejemplo[1].valor1);
    fscanf(pf, "%s", fejemplo[1].dato2);
    fscanf(pf, "%i", fejemplo[1].valor2);
    fscanf(pf, "%s", fejemplo[1].dato3);
    fscanf(pf, "%s", fejemplo[1].valor3);
    //printf("%s%s%s%s", fejemplo[1].dato1, fejemplo[1].valor1, fejemplo[1].dato2, fejemplo[1].valor2);
    printf("%s%i%s%i%s%s", fejemplo[1].dato1, *fejemplo[1].valor1, fejemplo[1].dato2, fejemplo[1].valor2, fejemplo[1].dato3, fejemplo[3].valor3);
    fclose(pf);
}
