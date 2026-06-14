#include <stdio.h>

int main() {

    int i, j;
    int row, col;
    int tempelt;

    // Ask the user for the matrix dimensions
    do {
        printf("Enter the number of lines: ");
        scanf("%d", &row);

        printf("Enter the number of columns: ");
        scanf("%d", &col);

    } while (row <= 0 || col <= 0);

    // The matrix must be square to transpose it by swapping elements
    if (row != col) {
        printf("The matrix must be square.\n");
        return 1;
    }

    // Create the matrix after knowing its size
    int M[row][col];

    // Fill the matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            M[i][j] = 3 * i + j;
        }
    }

    // Display the original matrix
    printf("\nOriginal matrix:\n");
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    // Transpose the matrix by swapping symmetric elements
    for (i = 0; i < row; i++) {
        for (j = i + 1; j < col; j++) {

            tempelt = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = tempelt;
        }
    }

    // Display the transposed matrix
    printf("\nTransposed matrix:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    // End of the program
    return 0;
}
