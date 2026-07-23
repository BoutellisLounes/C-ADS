#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct student Student;
typedef Student* Pstack; 

struct student {
    char name[15];
    char surname[15];
    float algo_grade;
    Pstack next;
};

// Initializes the Stack
void initStack(Pstack *Q) {
    *Q = NULL;
}

// Checks if the Stack is empty. Returns 1 (True) or 0 (False)
int IsEmpty(Pstack Q) { 
    return (Q == NULL) ? 1 : 0;
}

// Pushes a new student to the top of the Stack
void push(Pstack *Q, char name[], char surname[], float Algo_Grade) {
    Pstack N = (Pstack)malloc(sizeof(Student));
    strcpy(N->name, name);
    strcpy(N->surname, surname);
    N->algo_grade = Algo_Grade; 
    
    // The new node points to the current top
    N->next = *Q; 
    // The top of the stack is updated to the new node
    *Q = N; 
}

// Pops the top student from the Stack
void pop(Pstack *Q, char name[], char surname[], float *algo_grade) {
    if (IsEmpty(*Q)) {
        printf("Pop-Error ! The stack is empty !\n");
    } else {
        Pstack temp_stack = *Q; 
        
        strcpy(name, (*Q)->name);
        strcpy(surname, (*Q)->surname);
        *algo_grade = (*Q)->algo_grade;
        
        *Q = (*Q)->next; // Move top to the next node
        free(temp_stack); 
    }
}

// Counts the number of students
int countStudents(Pstack *Q) { 
    int count = 0;
    Student std;
    Pstack temp_stack;
    initStack(&temp_stack);

    while (!IsEmpty(*Q)) {
        pop(Q, std.name, std.surname, &std.algo_grade);
        count++;
        push(&temp_stack, std.name, std.surname, std.algo_grade);
    }

    // Restore the original stack
    while (!IsEmpty(temp_stack)) {
        pop(&temp_stack, std.name, std.surname, &std.algo_grade);
        push(Q, std.name, std.surname, std.algo_grade); 
    }
    return count;
}

// Displays all students in the Stack
void displayStack(Pstack *Q) { 
    Student std;
    Pstack Tq;
    initStack(&Tq);
    int i = 1; 

    while (!IsEmpty(*Q)) {
        pop(Q, std.name, std.surname, &std.algo_grade);
        printf("Student No.%d\n", i);
        printf("Name : %s\n", std.name);
        printf("Surname : %s\n", std.surname);
        printf("Algorithmics Grade : %.2f\n\n", std.algo_grade);
        i++;
        push(&Tq, std.name, std.surname, std.algo_grade);
    }

    // Restore the original stack
    while (!IsEmpty(Tq)) {
        pop(&Tq, std.name, std.surname, &std.algo_grade);
        push(Q, std.name, std.surname, std.algo_grade);
    }
}

// Calculates the sum of all grades
float SumGrade(Pstack *Q) { 
    float sum_grades = 0;
    Student std;
    Pstack temp_stack;
    initStack(&temp_stack);

    while (!IsEmpty(*Q)) {
        pop(Q, std.name, std.surname, &std.algo_grade);
        sum_grades += std.algo_grade;
        push(&temp_stack, std.name, std.surname, std.algo_grade);
    }

    // Restore the original stack
    while (!IsEmpty(temp_stack)) {
        pop(&temp_stack, std.name, std.surname, &std.algo_grade);
        push(Q, std.name, std.surname, std.algo_grade);
    }

    return sum_grades;
}

// Calculates the average grade
float AverageGrades(Pstack *Q) { 
    float sum_Grades = SumGrade(Q);
    int count_Students = countStudents(Q);
    
    if (count_Students == 0) {
        printf("Error ! Division by zero.\n");
        return 0;
    } else {
        return sum_Grades / count_Students;
    }
}

// Counts how many students are strictly above average
int countAboveAverage(Pstack *Q) { 
    int count = 0;
    float Average_Grades = AverageGrades(Q); 
    Student student;
    Pstack temp_stacks;
    initStack(&temp_stacks); 

    while (!IsEmpty(*Q)) {
        pop(Q, student.name, student.surname, &student.algo_grade);

        if (student.algo_grade > Average_Grades) {
            count++;
        }

        push(&temp_stacks, student.name, student.surname, student.algo_grade);
    }

    // Restore the original stack
    while (!IsEmpty(temp_stacks)) { 
        pop(&temp_stacks, student.name, student.surname, &student.algo_grade);
        push(Q, student.name, student.surname, student.algo_grade); 
    }
    return count;
}

int main() {
    Pstack s; 
    initStack(&s);
    int answer, i = 1;
    Student student;

    printf("*** Student Stack Management ***\n");

    do {
        printf("\nStudent %d:\n", i);
        printf("Name: ");
        scanf("%s", student.name);
        printf("Surname: ");
        scanf("%s", student.surname);
        printf("Algorithm Grade: ");
        scanf("%f", &student.algo_grade);

        push(&s, student.name, student.surname, student.algo_grade);

        printf("Do you want to add another student? (0: No, 1: Yes): ");
        scanf("%d", &answer); 
        i++;
    } while (answer != 0);

    printf("\n*** DISPLAY STACK ***\n");
    displayStack(&s);

    printf("\n*** STACK SIZE ***\n");
    printf("Total number of students: %d\n", countStudents(&s));

    printf("\n*** GRADE STATS ***\n");
    printf("Sum of grades: %.2f\n", SumGrade(&s));
    printf("Average grade: %.2f\n", AverageGrades(&s));

    printf("\n*** STUDENTS ABOVE AVERAGE ***\n");
    printf("Number of students with grade above average: %d\n", countAboveAverage(&s));
    
    // Memory Cleanup
    Student dummy;
    while (!IsEmpty(s)) {
        pop(&s, dummy.name, dummy.surname, &dummy.algo_grade);
    }
    
    return 0;
}
