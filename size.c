#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("[----- [김상수] [2018038078] -----]")

    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}