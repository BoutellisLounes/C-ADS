#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student Student;
typedef Student* Pqueue;

struct student {
    char name[15];
    char surname[15];
    float algo_grade;
    Pqueue next;
};

// 1. Initializes the Queue (Head and Tail both point to NULL)
void initQueue(Pqueue *Qh, Pqueue *Qq){
    *Qh = NULL;
    *Qq = NULL;
}

// 2. Checks if the Queue is empty. Returns 1 (True) if empty, 0 (False) otherwise.
int IsEmptyQueue(Pqueue Qh, Pqueue Qq){
    // A queue is empty if the Head (Qh) is NULL. 
    // Returning 1 means "Yes, it is empty".
    return (Qh == NULL) ? 1 : 0;
}

// 3. Adds a student to the end (Tail) of the Queue
void EnQueue(Pqueue *Qh, Pqueue *Qq, Student std){
    Pqueue Q = (Pqueue)malloc(sizeof(Student));
    strcpy(Q->name, std.name);
    strcpy(Q->surname, std.surname);
    Q->algo_grade = std.algo_grade;
    Q->next = NULL;
    
    if((*Qq) != NULL) {
        (*Qq)->next = Q; // Link the old tail to the new node
    }
    (*Qq) = Q; // The new node becomes the new tail no matter what
    
    // If the queue was empty, the new node is also the Head
    if((*Qh) == NULL) {
        (*Qh) = Q;
    }
}

// 4. Removes a student from the front (Head) of the Queue
void DeQueue(Pqueue *Qh, Pqueue *Qq, Student *std){
    
    if (!IsEmptyQueue(*Qh, *Qq)) {
        Pqueue temp_Queue;
    
        strcpy(std->name, (*Qh)->name);
        strcpy(std->surname, (*Qh)->surname);
        std->algo_grade = (*Qh)->algo_grade;
        
        temp_Queue = (*Qh); 
        (*Qh) = (*Qh)->next; // Move head to the next node
        free(temp_Queue); // Free the memory
        
        // If the queue becomes empty after dequeueing, Tail must also be NULL
        if ((*Qh) == NULL) {
            (*Qq) = NULL;
        }
    } else {
        printf("Error: The Queue is Empty!\n");
    }
}

// 5. Displays all students in the Queue
void DisplayStudents(Pqueue *Qh, Pqueue *Qq) {
    Pqueue th, tq; // Temporary Queue
    int j = 1;
    initQueue(&th, &tq);
    Student y;
    
    while ( !IsEmptyQueue(*Qh, *Qq) ) {
        DeQueue(Qh, Qq, &y);

        printf("Student No.%d : %s %s, Grade : %.2f\n", j, y.name, y.surname, y.algo_grade);
        j++; 
        EnQueue(&th, &tq, y);
    }
    
    // Restore the original queue
    *Qh = th;
    *Qq = tq;
}

// 6. Counts the total number of students
int countStudents(Pqueue *Qh, Pqueue *Qq) {
    if( IsEmptyQueue(*Qh, *Qq) ){
        // to avoid crashing the math calculations later.
        return 0; 
    } else {
        int count = 0;
        Pqueue th, tq;
        Student STD;
        initQueue(&th, &tq);

        while ( !IsEmptyQueue(*Qh, *Qq) ) {
            DeQueue(Qh, Qq, &STD);
            count++;
            EnQueue(&th, &tq, STD);
        }

        *Qh = th;
        *Qq = tq;
        return count;
    }   
}

// 7. Calculates the sum of all grades
float sumGrades(Pqueue *Qh, Pqueue *Qq){
    Pqueue th, tq;
    Student x;
    float sum = 0;
    initQueue(&th, &tq);

    while ( !IsEmptyQueue(*Qh, *Qq)) {
        DeQueue(Qh, Qq, &x);
        sum += x.algo_grade;
        EnQueue(&th, &tq, x);
    }
    *Qh = th;
    *Qq = tq;
    
    return sum;
}

// 8. Calculates the average grade
float averageGrades(Pqueue *Qh, Pqueue *Qq){
    int count_Students = countStudents(Qh, Qq);
    float sum_grades = sumGrades(Qh, Qq);

    if (count_Students == 0) return 0.0;

    return sum_grades / count_Students;
}

// 9. Counts students strictly above average
int countAboveAverage(Pqueue *Qh, Pqueue *Qq) {
    int count = 0;
    Student x;
    Pqueue th, tq;
    initQueue(&th, &tq);
    float average_grades = averageGrades(Qh, Qq);

    while( !IsEmptyQueue(*Qh, *Qq) ) {
        DeQueue(Qh, Qq, &x);
        if (x.algo_grade > average_grades) count++;
        EnQueue(&th, &tq, x);
    }
    *Qh = th;
    *Qq = tq; 

    return count;
}

int main(){
    Pqueue H, T;
    initQueue(&H, &T);
    Student std;
    int response = 1, i = 1;

    printf("Enter student information:\n");
    do {
        printf("\nStudent %d:\n", i);
        printf("Name: ");
        scanf("%s", std.name);
        printf("Surname: ");
        scanf("%s", std.surname);
        printf("Algorithmics Grade: ");
        scanf("%f", &std.algo_grade);
        
        EnQueue(&H, &T, std);
        
        printf("Would you like to add another student? (0: No, 1: Yes) ");
        scanf("%d", &response);
        i++;
    } while (response != 0);

    printf("\n--- Display ---\n");
    DisplayStudents(&H, &T);

    printf("\n--- Queue size ---\n");
    printf("Number of students in the queue: %d\n", countStudents(&H, &T));

    printf("\n--- Sum of Grades ---\n");
    printf("Sum of algorithmics grades: %.2f\n", sumGrades(&H, &T));
    
    printf("\n--- Average Grade ---\n");
    printf("Average grade: %.2f\n", averageGrades(&H, &T));

    printf("\n--- Students Above Average ---\n");
    printf("Number of students with grades above average: %d\n", countAboveAverage(&H, &T));
    
    // Memory Cleanup
    Student dummy;
    while (!IsEmptyQueue(H, T)) {
        DeQueue(&H, &T, &dummy);
    }
    
    return 0;
}
