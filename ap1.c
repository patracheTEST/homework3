#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("[----- [김상수] [2018038078] -----]")

    int list[5];
    int *plist[5] = {NULL,};

    // plist에 int형의 크기인 4만큼 동적으로 위치를 할당해준다.
    plist[0] = (int *)malloc(sizeof(int));

    list[0] = 1;
    list[1] = 100;

    *plist[0] = 200;
    // &list[0], list, &list 전부 같은 위치를 가리킨다.
    printf("list[0]= %d\n", list[0]);
    printf("&list[0]= %p\n", &list[0]);
    printf("list= %p\n", list);
    printf("&list= %p\n", &list);
    
    printf("----------------------------------------\n\n");

    // list[1]과 *(list+1)은 동일한 위치에서 값을 가져오므로 같은 값을 가진다.
    // 물론 &list[1], list+1 은 같은 위치를 가리킨다.
    printf("list[1]= %d\n", list[1]);
    printf("&list[1]= %p\n", &list[1]);
    printf("*(list+1)= %d\n", *(list + 1));
    printf("list+1= %p\n", list+1);

    printf("----------------------------------------\n\n");
    printf("*plist[0] = %d\n", *plist[0]);
    printf("&plist[0] = %p\n", &plist[0]);
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);
    // plist[1] ~ plist[4] 는 동적으로 할당 받지 않아서 위치가 나오지 않는다.
    printf("plist[0] = %p\n", plist[0]);
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4]= %p\n", plist[4]);
    
    free(plist[0]);
}