/**< el asterisco se utiliza para dos cosas:
    - En las definiciones significa que declaras un puntero
    - En el resto del código significa que quieres saber la posicion de memoria de ese puntero,
        + Para acceder al valor del puntero unicamente entramos a la variable, sin asterisco
    Con el ampersand obtenemos la direccion de memoria de una variable no puntero.

    -> Como cambiar el valor de un puntero: creamos una varialbe y le asignamos al puntero la direccion de la variable
        >int *p, a = 0;
        >p = &a;
    -> Como cambiar la direccion de un puntero: como el anterior, pero cambiamos la variable a la que apunta
        >int *p, a = 0, b = 1;
        >p = &a;
        >p = &b;
    -> Como leer el valor de un puntero:
    -> Como leer la direccion de un puntero:

    -> &variable == direccion de la variable. Si es un puntero nos da la direccion del puntero (direccion de la direccion)
    -> *variable == contenido de la variable. Si es un punterio saca el dato de la direccion que tenga asignada.
       Si es una variable normal petara porque no estamos en una direccion, no se puede ir al contenido de un contenido.
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
