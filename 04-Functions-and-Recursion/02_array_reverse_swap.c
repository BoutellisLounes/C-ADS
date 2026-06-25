#include <stdio.h>
#define N 10

// Function to fill the array with user input
void Fill_Array(int T[]){
    int i;

    // Loop to input N elements
    for(i = 0; i < N; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
        printf("\n");
    }
}

// Function to swap (reverse) the array
void Swap_Array(int T[]) {
    int i, temp;

    // Loop until the middle of the array
    for(i = 0; i < N / 2; i++) {
        // Swap elements from start and end
        temp = T[i];
        T[i] = T[N - i - 1];
        T[N - i - 1] = temp;
    }
}

// Function to display the array elements
void Display_Array(int T[]) {
    int i;

    // Loop to print all elements
    for(i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
}

int main(){
    int T[N];

    // Ask user to enter array elements
    printf("Enter the elements of the array:\n");
    Fill_Array(T);

    // Reverse the array
    Swap_Array(T);

    // Display the result
    printf("---The array after swapping is:---\n");
    Display_Array(T);

    return 0;
}
