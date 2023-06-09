#include <stdio.h>

void print_one(int *ptr, int rows);

int main() {

    printf("[----- [김상수] [2018038078] -----]")

    int one[] = {0, 1, 2, 3, 4};

    // one이라는 배열의 위치 출력
    printf("one     = %p\n", one);
    printf("&one    = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);
    printf("\n");
    printf("------------------------------------\n"); 
    printf(" print_one(&one[0], 5) \n"); 
    printf("------------------------------------\n"); 
    // 시작위치로 &one[0] 을 준 값에 대하여 각 위치와 값 출력
    print_one(&one[0], 5);
    printf("------------------------------------\n");
    printf(" print_one(one, 5) \n");
    printf("------------------------------------\n"); 
    // 시작위치로 one 을 준 값에 대하여 각 위치와 값 출력
    print_one(one, 5);

    return 0; 
}

void print_one(int *ptr, int rows) {
    /* print out a one-dimensional array using a pointer */
    int i;

    printf ("Address \t Contents\n"); 

    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); 
    printf("\n");
}