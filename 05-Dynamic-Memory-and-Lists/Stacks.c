#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct student Student;

struct student
{
    char name[15];
    char surname[15];
    float algo_grade;
    Pstack next;
};

typedef Student* Pstack;

void initStack(Pstack *Q) {
    *Q = NULL;
}

float IsEmpty(Pstack Q) {
    if (Q == NULL){
        return 1;
    } else {
        return 0;
    }
}

void push(Pstack *Q, char name[15], char surname[15], float Algo_Grade ) {
    Pstack N = (Pstack)malloc(sizeof(Student));

    strcpy(N->name,name);
    strcpy(N->surname,surname);
    N->algo_grade = Algo_Grade; 
    N->next = ;
    *Q
}

void pop(Pstack *Q, char *name[15], char *surname[15], float *algo_grade) {
        Pstack temp_stack;

    if ( IsEmpty(*Q) ) {
        printf("Pop-Error ! The stack is empty !");
    } else {
        strcpy(*name,(*Q)->name);
        strcpy(*surname,(*Q)->surname);
        *algo_grade = (*Q)->algo_grade;
        temp_stack = *Q;
        *Q = (*Q)->next;
        free(temp);
    }
}

int countStudents(Pstack Q) {
    int count = 0;
    Student std;
    Pstack temp_stack;
    initStack(&temp_stack);

    while ( !IsEmpty(Q) ) {
        pop(&Q,&std.name,&std.surname,&std.algo_grade);
        count++ ;
        push(&temp_stack,std.name,std.surname,std.algo_grade);
    }

    while ( !IsEmpty(temp_stack) ) {
        pop(&temp_stack,&std.name,&std.surname,&std.algo_grade);
        push(&Q,std.name,std.surname,std.algo_grade)
    }
    return count;
}

void displayStack(Pstack Q) {
    Student std;
    Pstack Tq;
    initStack(&Tq);
    int i=0;

    while ( !IsEmpty(Q) ) {
        pop(&Q, &std.name, &std.surname, &std.algo_grade);
        printf("Student No.%d\n", i);
        printf("Name :%s\n", std.name);
        printf("Surname :%s\n", std.surname);
        printf("Algorithmics Grade : %.2f\n", std.algo_grade);
        i++;
        push(&Tq, std.name,std.surname,std.algo_grade);
    }

    while ( !IsEmpty( Tq )) {
        pop(&Tq, &std.name, &std.surname, &std.algo_grade);
        push(&Q, std.name,std.surname,std.algo_grade);
    }
}
