#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Std Student;
typedef Student* Pstud;

struct Std {
    char name[15];
    char surname[15];
    float algo_grade;
    Pstud next;
}

void initList(Pstud* List){
    *List = NULL;
}

void InsertQueue(Pstud* List, char Name[15], char Surname[15], float Algo_Grade) {
    Pstud temp;
    Pstud L=(Pstud)malloc(sizeof(Std)); 
    strcpy(*L->name, Name);
    strcpy(*L->surname, Surname);
    *L->algo_grade = Algo_Grade;
    *L->next = NULL;
    
    if(*List == NULL){
        *List = L;
    }else {
        temp = *List;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = L;
    }
}

