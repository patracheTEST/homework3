#include <stdio.h>

#define MAX_SIZE 100

float sum1(float list[], int); 
float sum2(float *list, int); 
float sum3(int n, float *list);

float input[MAX_SIZE], answer; int i;

int main(void) {

    printf("[----- [김상수] [2018038078] -----]")

    // input에 0 ~ 99 까지 넣기
    for(i=0; i < MAX_SIZE; i++) 
        input[i] = i;

    /* for checking call by reference */ 
    printf("--------------------------------------\n"); 
    printf(" sum1(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input);

    answer = sum1(input, MAX_SIZE);

    printf("The sum is: %f\n\n", answer);
    printf("--------------------------------------\n"); 
    printf(" sum2(input, MAX_SIZE) \n"); 
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input);

    answer = sum2(input, MAX_SIZE);

    printf("The sum is: %f\n\n", answer);
    printf("--------------------------------------\n"); 
    printf(" sum3(MAX_SIZE, input) \n"); 
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input);

    answer = sum3(MAX_SIZE, input);

    printf("The sum is: %f\n\n", answer);
}

// list, list[0] 위치 출력 및 0~99까지 더한 값 반환(sum에 출력)
float sum1(float list[], int n) {
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum = 0;

    for(i = 0; i < n; i++)
        tempsum += list[i];

    return tempsum;
}

// list, list[0] 위치 출력 및 0~99까지 더한 값 반환(sum에 출력)
// 인데 배열이 아니라 포인터로 연산
float sum2(float *list, int n) {
    printf("list \t= %p\n", list);
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum = 0; 

    for(i = 0; i < n; i++)
        tempsum += *(list + i); 

    return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float *list) {
    printf("list \t= %p\n", list); 
    printf("&list \t= %p\n\n", &list);

    int i;
    float tempsum = 0;

    for(i = 0; i < n; i++)
        tempsum += *(list + i); 

    return tempsum;
}