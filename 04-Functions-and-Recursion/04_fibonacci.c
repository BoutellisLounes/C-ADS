#include <stdio.h>

int count = 0;

// Compute the Fibonacci number using an iterative method.
int fib_iter(int n) {
    int fib = 1, fib_1 = 1, fib_2 = 1;

    if (n == 0 || n == 1) {
        fib = 1; // Base cases.
    } else {
        for (int i = 2; i <= n; i++) {
            fib = fib_1 + fib_2;
            fib_2 = fib_1;
            fib_1 = fib;
        }
    }

    return fib;
}

// Compute the Fibonacci number using recursion.
int fib_Rec(int n) {
    count++; // Count each recursive function call.

    int result;

    if (n == 0 || n == 1) {
        result = 1; // Base cases.
    } else {
        result = fib_Rec(n - 1) + fib_Rec(n - 2); // Recursive step.
    }

    return result;
}

int main() {
    int n;

    printf("--- Fibonacci Sequence ---\n");

    printf("Enter a non-negative integer: ");

    // Read the input until a valid value is entered.
    do {
        scanf("%d", &n);
    } while (n < 0);

    printf("Result of fib_iter(%d) = %d\n", n, fib_iter(n));
    printf("Result of fib_Rec(%d) = %d\n", n, fib_Rec(n));
    printf("Number of recursive function calls: %d\n", count);

    return 0;
}
