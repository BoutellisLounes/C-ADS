#include <stdio.h>

int main() {
    const int Nmax=20;
    // Declaration of the original array and the two resulting arrays
    int T[Nmax], T0[Nmax], T1[Nmax];

    // N: size of T
    // i: loop counter
    // j: index for T0 (even numbers)
    // k: index for T1 (odd numbers)
    int N, i, j, k;

    // Read and validate the size of the array
    do {

        printf("Enter the size of the array T: ");
        scanf("%d", &N);

    } while ((N <= 0) || (N > Nmax));

    // Read the elements of the array
    printf("\n--- Enter the elements of the array T ---\n");

    i = 0;

    do {

        printf("Enter element %d: ", i + 1);
        scanf("%d", &T[i]);

        i++;

    } while (i < N);

    // Initialize the indices of T0 and T1
    j = 0;
    k = 0;

    // Separate even and odd numbers
    for (i = 0; i < N; i++) {

        if (T[i] % 2 == 0) {

            T0[j] = T[i];
            j++;

        } else {

            T1[k] = T[i];
            k++;

        }
    }

    // Display the elements of T0
    printf("\n--- The elements of T0 (even numbers) ---\n");

    for (i = 0; i < j; i++) {

        printf("T0[%d] = %d\n", i, T0[i]);

    }

    // Display the elements of T1
    printf("\n--- The elements of T1 (odd numbers) ---\n");

    for (i = 0; i < k; i++) {

        printf("T1[%d] = %d\n", i, T1[i]);

    }

    return 0; // End of the program
}
