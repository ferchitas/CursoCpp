#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ejemploCadenas(){

    char texto[50] = "lorem ipsum";
    unsigned char *ptr_texto;

    ///copiar
    ptr_texto = malloc(100);
    strcpy(ptr_texto, texto);

    texto[3] = 'l';
    *(ptr_texto + 3) = 65;

    printf("texto: %s\nlongitud: %i\n", texto, strlen(texto));
    printf("texto: %s\nlongitud: %i\n", ptr_texto, strlen(ptr_texto));

    ///concatenar, la segunda la mete en la primera
    strcat(ptr_texto, texto);
    printf("texto: %s\nlongitud: %i\n", ptr_texto, strlen(ptr_texto));

    ///liberamos la memoria reservada
    free(ptr_texto);
}
