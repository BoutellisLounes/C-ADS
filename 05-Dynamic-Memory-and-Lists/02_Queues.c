#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student Student;
typedef Student* Pqueue;

struct student {
    char name[15];
    char surname[15];
    float algo_grade;
    Pqueue next;
};

void initQueue(Pqueue *Qh, Pqueue *Qq){
    *Qh = NULL;
    *Qq = NULL;
}

int IsEmptyQueue(Pqueue Qh, Pqueue Qq){
    return (Qq == NULL) ? 0 : 1;
}

void EnQueue(Pqueue *Qh, Pqueue *Qq, Student std){
    Pqueue Q = (Pqueue)malloc(sizeof(Student));
    strcpy(Q->name,std.name);
    strcpy(Q->surname,std.surname);
    Q->algo_grade = std.algo_grade;
    Q->next = NULL;
    
    if((*Qq) != NULL) {
        (*Qq)->next = Q;
        (*Qq) = Q;
    }
    if((*Qh) == NULL) (*Qh) = Q;
}

void DeQueue(Pqueue *Qh, Pqueue *Qq, Student *std){
    if (not(IsEmpty(*Qh,*Qq))) {
        Pqueue temp_Queue;
        strcpy(*std->name,(*Qh)->name);
        strcpy(*std->surname,(*Qh)->surname);
        *std->algo_grade = (*Qh)->algo_grade;
        temp_Queue = (*Qh); 
        (*Qh) = (*Qh)->next;
        free(temp_Queue); 
        if ((*Qh) == NULL) {
            (*Qq) = NULL;
        }
    }else {
        printf("Error : The Queue is Empty !");
    }
}

void DisplayStudents(Pqueue *Qh, Pqueue *Qq) {
    Pqueue th, tq;
    int j=1;
    initQueue(&th, &tq);
    Student y;

    while ( !IsEmpty(*Qh, *Qq) ) {
        DeQueue(Qh,Qq,&y);
        printf("Student No.%d :, %s %s, Grade : %2.f\n", j, y.name, y.surname, y.algo_grade);
        i++;
        EnQueue(&th ,&tq, y);
    }
    *Qh = th;
    *Qq = tq;
}

int countStudents(Pqueue *Qh, Pqueue *Qq) {
    
    if( IsEmpty(Qh,Qq) ){
        printf("Error : The queue is empty !");

    } else{

        int count = 0;
        Pqueue th,tq;
        Student STD;
        initQueue(&th,&tq);

        while ( !IsEmpty(*Qh,*Qq) ) {
            DeQueue(Qh,Qq,*STD);
            count++;
            EnQueue(&th,&tq,STD);
        }

        *Qh = th;
        *Qq = tq;
        return count;
    }   
}
