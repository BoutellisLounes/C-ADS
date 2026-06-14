#include <stdio.h>

#define N 3

int main() {

    int Mat[N][N];
    int sum = 0, product = 1, i, j;

    // Fill the matrix with user input
    printf("---Enter the elements of the matrix:---\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &Mat[i][j]);
        }
    }

    // Display the matrix
    printf("---The matrix is:---\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", Mat[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of the main diagonal elements
    for (i = 0; i < N; i++) {
        sum += Mat[i][i];
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    // Calculate the product of the secondary diagonal elements
    for (i = 0; i < N; i++) {
        product = product * Mat[i][N - i + 1];
    }

    printf("The product of the secondary diagonal elements is: %d\n", product);

    return 0;
}
