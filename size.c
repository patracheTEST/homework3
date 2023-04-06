#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("[----- [김상수] [2018038078] -----]")
    // 이중 포인터 x 선언
    int **x;

    // x의 크기 출력 : 4 (int형)
    printf("sizeof(x) = %lu\n", sizeof(x));
    // 포인터 x의 크기 출력 : 8 (포인터)
    printf("sizeof(*x) = %lu\n", sizeof(*x)); 
    // 이중 포인터 x의 크기 출력 : 8 (포인터)
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}