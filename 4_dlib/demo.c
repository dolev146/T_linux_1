#include <stdio.h>
#include "basic.h"

int main(){

    printf("Addition:%d",add(13,23));
    printf("Subtraction:%d",sub(123,23));
    return 0;
}

// gcc -c demo.c
// gcc -I . -c demo.c
// at the time of execution we need to link demo.o to libbasic.h
// gcc -o demo demo.o libbasic.a
// ./demo

// another way
// gcc -o demo -L . demo.o -lbasic