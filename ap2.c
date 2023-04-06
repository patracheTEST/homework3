#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("[----- [김상수] [2018038078] -----]")

    int list[5];
    int *plist[5];

    list[0] = 10;
    list[1] = 11;

    // 사용 안해서 왜쓰는지 모르겠습니다.
    plist[0] = (int*)malloc(sizeof(int));

    // 정적으로 선언되어 있는 List 에 대해서 0이 낮은 위치, 4가 높은 위치에 값이 선언되어 있다.
    printf("list[0] \t= %d\n", list[0]); 
    printf("list \t\t= %p\n", list); 
    printf("&list[0] \t= %p\n", &list[0]); 
    printf("list + 0 \t= %p\n", list+0); 
    printf("list + 1 \t= %p\n", list+1); 
    printf("list + 2 \t= %p\n", list+2); 
    printf("list + 3 \t= %p\n", list+3); 
    printf("list + 4 \t= %p\n", list+4); 
    printf("&list[4] \t= %p\n", &list[4]);

    free(plist[0]);
}