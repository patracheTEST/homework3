#include <stdio.h>

struct student1 {
    char lastName;
    int studentId; 
    char grade;
};

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;

int compareStudent(student2 st1, student2 st2);

int main() {

    printf("[----- [김상수] [2018038078] -----]")

    struct student1 st1 = {'A', 100, 'A'};

    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};

    printf("\nst2.lastName = %c\n", st2.lastName); 
    printf("st2.studentId = %d\n", st2.studentId); 
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;
    st3 = st2;

    printf("\nst3.lastName = %c\n", st3.lastName); 
    printf("st3.studentId = %d\n", st3.studentId); 
    printf("st3.grade = %c\n", st3.grade);
    
    /* equality test */
    if(compareStudent(st2, st3)) /* not working */
        printf("equal\n"); 
    else
        printf("not equal\n");
    return 0; 
}

int compareStudent(student2 st1, student2 st2){
    if(
        st1.grade == st2.grade &&
        st1.lastName == st2.lastName &&
        st1.studentId == st2.studentId
    ) {
        return 1;
    } else {
        return 0;
    }
}