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
