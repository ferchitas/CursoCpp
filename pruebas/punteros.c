/**< el asterisco se utiliza para dos cosas:
    - En las definiciones significa que declaras un puntero
    - En el resto del código significa que quieres saber la posicion de memoria de ese puntero,
        + Para acceder al valor del puntero unicamente entramos a la variable, sin asterisco
    Con el ampersand obtenemos la direccion de memoria de una variable no puntero.

    como cambiar el valor de un puntero:
    como cambiar la direccion de un puntero:
    Como leer el valor de un puntero:
    como leer la direccion de un puntero:
 */
double i, j, *p;
int *pint;

void prueba(){

    i = 10.8, j = 10.9;
    p = 1000;
    //pint = p;
    printf("i = %f - j = %f\n\n", i, j);
    printf("&i = %d - &j = %d\n\n", &i, &j);
    printf("p = %d - &p = %d *p = %d\n\n", p, &p, p);
}
