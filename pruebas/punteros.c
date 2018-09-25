int i, j, *p;

void prueba(){

    i = 10, j = 10;
    p = &i;
    printf("i = %d - j = %d\n\n", i, j);
    printf("&i = %d - &j = %d\n\n", &i, &j);
    printf("p = %d - &p = %d *p = %d\n\n", p, &p, *p);
}
