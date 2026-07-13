#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Typedef definitions for easier usage
typedef struct Std Student;
typedef Student* Pstud;

// Core structure declaration
struct Std {
    char name[15];
    char surname[15];
    float algo_grade;
    Pstud next;
}; // FIX: Added the missing semicolon here

// 1. Initializes the linked list to NULL
void initList(Pstud* List){
    *List = NULL;
}

// 2. Creates and inserts a student at the end (tail) of the list
void insertQueue(Pstud* List, char Name[15], char Surname[15], float Algo_Grade) {
    Pstud temp;
    // FIX: Changed sizeof(Std) to sizeof(struct Std) since Std is a struct tag
    Pstud L = (Pstud)malloc(sizeof(struct Std)); 
    
    // FIX: Removed the '*' before L->. L is already a pointer, so we use L->member directly.
    strcpy(L->name, Name);
    strcpy(L->surname, Surname);
    L->algo_grade = Algo_Grade;
    L->next = NULL;
    
    // If the list is empty, the new node becomes the head
    if(*List == NULL){
        *List = L;
    } else {
        // Otherwise, traverse the list until the last node
        temp = *List;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Link the last node to our new node
        temp->next = L;
    }
}

// 3. Counts the total number of students in the list
int CountStudents(Pstud List){
    int count = 0;
    Pstud temp = List;
    
    // Traverse until the end of the list
    while (temp != NULL) {
        count++;
        temp = temp->next; // Move to the next node
    }
    return count;
}

// 4. Calculates the sum of all algorithmic grades
float SumGrades(Pstud List) {
    float sum = 0;
    Pstud temp = List;

    // Traverse and accumulate the grades
    while (temp != NULL){
        sum += temp->algo_grade;
        temp = temp->next;
    }
    
    return sum;
}

// 5. Calculates the class average grade
float averageGrades(Pstud List){
    int Count_Students = CountStudents(List);
    float Sum_Grades = SumGrades(List);
    
    // Safety check: Prevent division by zero if the list is empty
    if (Count_Students == 0) return 0.0;
    
    return Sum_Grades / Count_Students;
}

// 6. Counts how many students scored strictly above the average
int countAboveAverage(Pstud List) {
    int count = 0;
    float avg = averageGrades(List);
    Pstud temp = List;

    // Traverse and compare each grade with the calculated average
    while (temp != NULL){
        if(temp->algo_grade > avg){
            count++;
        }
        temp = temp->next;
    }
    
    return count;
}

int main(){
    Pstud L;
    initList(&L); // Initialize list to NULL
    
    char name[15];
    char surname[15];
    float algo_grade;
    int answer, j = 1;
     
    printf("Enter student information:\n");

    // Dynamic insertion loop based on user choice
    do {
        printf("Student %d:\n", j);
        printf("Name: ");
        scanf("%s", name);
        printf("Surname: ");
        scanf("%s", surname);
        printf("Algorithmics Grade: ");
        scanf("%f", &algo_grade);
        
        // FIX: Match case name (insertQueue instead of InsertQueue)
        insertQueue(&L, name, surname, algo_grade); 
        
        printf("Would you like to add another student? (0: No, 1: Yes):\n");
        scanf("%d", &answer);
        j++;
    } while (answer != 0);

    // Displaying the processing results
    printf("\n--- Results ---\n");
    printf("Total number of students: %d\n", CountStudents(L));
    printf("Sum of algorithmics grades: %.2f\n", SumGrades(L));
    printf("Average grade: %.2f\n", averageGrades(L));
    printf("Number of students above the average: %d\n", countAboveAverage(L));
    
    // Memory Cleanup: Freeing allocated nodes before exiting
    Pstud temp;
    while (L != NULL) {
        temp = L;
        L = L->next;
        free(temp);
    }
    
    return 0;    
}
