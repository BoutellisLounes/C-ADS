#include <stdio.h> // Library used for printf() and scanf()

int main() {

    int A, B; // Declaration of the two integer operands
    char answer; // Declaration of the variable that receives the user's choice

    printf("Enter the first operand:\n");
    scanf("%d", &A);

    printf("Enter the second operand:\n");
    scanf("%d", &B);

    printf("Enter the operator code (1: /, 2: -, 3: *, 4: +): ");
    scanf(" %c", &answer);

    // Perform the selected arithmetic operation
    switch (answer) {

        case '1':

            // Check if the second operand is equal to zero
            if (B == 0) {

                printf("Error: Division by zero is not allowed.\n");

            } else {

                // If the second operand is not zero, perform the division
                printf("%d / %d = %f\n", A, B, (float)A / B);
            }

            break;

        case '2':

            printf("%d - %d = %d\n", A, B, A - B);

            break;

        case '3':

            printf("%d * %d = %d\n", A, B, A * B);

            break;

        case '4':

            printf("%d + %d = %d\n", A, B, A + B);

            break;

        default:

            // If the entered code does not correspond to any valid operation
            printf("Error: Invalid operator code.\n");

            break;
    }

    return 0; // End of the program
}
