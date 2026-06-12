#include <stdio.h>

int main() {

    int number, sum, i;

    printf("Enter an integer to check whether it is a perfect number: ");
    scanf("%d", &number);

    if (number <= 0) {

        printf("\nPlease enter a positive integer.\n");

    } else {

        sum = 0;

        // Find all proper divisors and add them to the sum
        for (i = 1; i <= (number / 2); i++) {

            // Check if i is a divisor of the number
            if (number % i == 0) {

                sum = sum + i;

            }
        }

        // Check whether the sum of the proper divisors equals the number
        if (sum == number) {

            printf("\n%d is a perfect number.\n", number);

        } else {

            printf("\n%d is not a perfect number.\n", number);

        }
    }

    return 0; // End of the program
}
