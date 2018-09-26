/**< Aritmetica de arrays: si a un array o puntero le sumas un entero se va esas posiciones:
    int arr[5], direccionPosicion2;
    direccionPosicion2 = arr + 2;

*/



void prueba_arrays(){

    int arr[5];
    int *p = arr[0];
    int direccion = (int)p;

    /**< sizeof de un array te devuelve el tamaño reservado en memoria de esa variable en bytes.
    */
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){

        arr[i] = i;
        *((int *) (direccion + i * sizeof(int))) = i * 10;
        printf("%d\n", arr[i]);
    }
    printf("\n%d\n\n", * arr);
    printf("\n%d\n\n", * (arr) + 3);
    printf("\n%d\n\n", *p);
    printf("%d - %d", sizeof(arr), sizeof(arr[0]));
}
