#include <stdio.h>

struct student {
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};

int main() {
    struct student pst;
        
    // 구조체 student의 크기 출력
    printf("size of student = %ld\n", sizeof(struct student)); 
    // 정수형의 크기 출력
    printf("size of int = %ld\n", sizeof(int)); 
    // short 크기 출력
    printf("size of short = %ld\n", sizeof(short));

    return 0; 
}