#include <stdio.h>
#include <stdlib.h>

void ejemplos_op_bits(){

    printf("Operaciones con bits:\n");
    short i = 0x0200;
    short j = 0x0201;
    short n = i & j;
    short c = i | j;
    short c1 = i ^ j;
    short c2 = i >> 1;
    short c3 = i << 1;

    printf("i = %i & j = %i == n = %i\n", i, j, n);
    printf("i = %x | j = %x == c = %x\n", i, j, c);
    printf("i = %x ^ j = %x == c = %x\n", i, j, c1);
    printf("i >> 1 = %x == c = %x\n", i, j, c2);
    printf("i << 1 = %x == c = %x\n", i, c3);
}
