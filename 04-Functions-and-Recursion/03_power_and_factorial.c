#include <stdio.h>

// Compute the factorial using an iterative method.
int Iter_Factorial(int n) {
    int i, fact;

    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers.
    } else if (n == 0) {
        return 1; // 0! = 1.
    } else {
        fact = 1;
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

// Compute the factorial using recursion.
int Rec_Factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers.
    } else if (n == 0) {
        return 1; // Base case.
    } else {
        return n * Rec_Factorial(n - 1); // Recursive step.
    }
}

// Compute x^n using an iterative method.
float Iter_Power(float x, int n) {
    float result = 1.0;

    if (n < 0) {
        return -1; // Negative exponents are not handled.
    } else if (n == 0) {
        return 1; // x^0 = 1.
    } else {
        for (int i = 1; i <= n; i++) {
            result *= x;
        }
        return result;
    }
}

// Compute x^n using recursion.
float Rec_Power(float x, int n) {
    if (n < 0) {
        return -1; // Negative exponents are not handled.
    } else if (n == 0) {
        return 1; // Base case.
    } else {
        return x * Rec_Power(x, n - 1); // Recursive step.
    }
}

int main() {
    int n;
    float x;

    printf("--- Factorial Test ---\n");

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Iterative factorial: %d! = %d\n", n, Iter_Factorial(n));
    printf("Recursive factorial: %d! = %d\n", n, Rec_Factorial(n));

    printf("\n--- Power Test ---\n");

    printf("Enter the base: ");
    scanf("%f", &x); // In this program, we define x^0 = 1.

    printf("Enter the exponent: ");
    scanf("%d", &n);

    printf("Iterative power: %.2f^%d = %.2f\n", x, n, Iter_Power(x, n));
    printf("Recursive power: %.2f^%d = %.2f\n", x, n, Rec_Power(x, n));

    return 0;
}
