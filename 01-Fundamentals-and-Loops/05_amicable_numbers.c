#include <stdio.h>

int main() {

    // Declaration of the two numbers
    int number1, number2;

    // Declaration of the loop counter and the sums of proper divisors
    int i, sum1, sum2;

    printf("Enter the first strictly positive integer: ");
    scanf("%d", &number1);

    printf("Enter the second strictly positive integer: ");
    scanf("%d", &number2);

    // Check if both numbers are strictly positive
    if ((number1 > 0) && (number2 > 0)) {

        // Initialize the sums of proper divisors
        sum1 = 0;
        sum2 = 0;

        // Calculate the sum of the proper divisors of the first number
        for (i = 1; i <= (number1 / 2); i++) {

            if (number1 % i == 0) {

                sum1 = sum1 + i;

            }
        }

        // Calculate the sum of the proper divisors of the second number
        for (i = 1; i <= (number2 / 2); i++) {

            if (number2 % i == 0) {

                sum2 = sum2 + i;

            }
        }

        // Check whether the two numbers are amicable
        if ((sum1 == number2) && (sum2 == number1)) {

            printf("\n%d and %d are amicable numbers.\n", number1, number2);

        } else {

            printf("\n%d and %d are not amicable numbers.\n", number1, number2);

        }

    } else {

        printf("\n One or both entered numbers do not satisfy the condition of being strictly positive integers.\n");

    }

    return 0; // End of the program
}
