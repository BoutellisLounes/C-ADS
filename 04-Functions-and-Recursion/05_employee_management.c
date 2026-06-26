#include <stdio.h>

typedef struct EMP {
    char last_name[20];
    char first_name[20];
    int age;
    char health_insurance;
    char Grade;
} Employee;

// Read the information of all employees.
void Input(int N, Employee T[N]) {

    for (int i = 0; i < N; i++) {
        printf("Enter the information of employee No.%d:\n", i + 1);

        printf("Last Name: ");
        scanf("%s", T[i].last_name);

        printf("First Name: ");
        scanf("%s", T[i].first_name);

        printf("Age: ");
        scanf("%d", &T[i].age);

        printf("Health Insurance (Y/N): ");
        scanf(" %c", &T[i].health_insurance); // Ignore the previous newline.

        printf("Grade (A, B, C...): ");
        scanf(" %c", &T[i].Grade); // Ignore the previous newline.

        printf("\n");
    }
}

// Display the information of all employees.
void Display(int N, Employee T[N]) {

    for (int i = 0; i < N; i++) {

        printf("Information of employee No.%d:\n", i + 1);

        printf("Last Name: %s\n", T[i].last_name);
        printf("First Name: %s\n", T[i].first_name);
        printf("Age: %d\n", T[i].age);
        printf("Health Insurance: %c\n", T[i].health_insurance);
        printf("Grade: %c\n\n", T[i].Grade);
    }
}

// Count the employees whose grade is A or B.
int NbrEMP_AB(int N, Employee T[N]) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (T[i].Grade == 'A' || T[i].Grade == 'B') {
            count++;
        }
    }
    return count;
}

int main() {
    int Nbr;
  
    // Read the number of employees.
    printf("Enter the number of employees: ");
    do {
        scanf("%d", &Nbr);
    } while (Nbr <= 0);

    // Create an array of employees.
    Employee Vect[Nbr];

    printf("\nEnter the information of %d employees:\n\n", Nbr);

    // Read all employee information.
    Input(Nbr, Vect);

    printf("\n--- Employee List ---\n\n");

    // Display all employees.
    Display(Nbr, Vect);

    // Display the number of employees with grade A or B.
    printf("Number of employees with grade A or B: %d\n", NbrEMP_AB(Nbr, Vect));

    return 0;
}
