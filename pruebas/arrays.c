void prueba_arrays(){

    int arr[5];
    int *p = &(arr[1]);

    /**< sizeof de un array te devuelve  */
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){

        arr[i] = i;
        printf("%d ", i);
    }
    printf("\n%d\n\n", * arr);
    printf("\n%d\n\n", * (arr) + 3);
    printf("\n%d\n\n", *p);
    printf("%d - %d", sizeof(arr), sizeof(arr[0]));
}
