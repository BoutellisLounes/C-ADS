#include <stdio.h>

int main() {

    const int Nmax = 20;

    // N: size of the array
    // i: loop counter
    int N, i;

    // Character array and temporary variable used for shifting
    char T[Nmax], tempchar;

    // Read and validate the size of the array
    do {

        printf("Enter the size of the character array to shift: ");
        scanf("%d", &N);

    } while ((N <= 0) || (N > Nmax));

    printf("\n--- Fill the array T ---\n");

    // Fill the array
    for (i = 0; i < N; i++) {

        printf("Enter the %dth element: ", i + 1);
        scanf(" %c", &T[i]);

        printf("\n");
    }

    printf("--- The array T after shifting: ---\n");

    // Save the first element
    tempchar = T[0];

    // Shift all elements one position to the left
    for (i = 0; i < N - 1; i++) {

        T[i] = T[i + 1];

    }

    // Put the first element at the end of the array
    T[N - 1] = tempchar;

    // Display the shifted array
    for (i = 0; i < N; i++) {

        printf("The %dth element: %c", i + 1, T[i]);
        printf("\n");

    }

    return 0; // End of the program
}
