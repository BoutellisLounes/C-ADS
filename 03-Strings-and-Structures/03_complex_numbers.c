#include <stdio.h>

// Define a structure to represent a complex number
typedef struct complex_num {
    float real; // Real part of the complex number
    float img;  // Imaginary part of the complex number
} complex;

int main() {
    // Declare variables for the inputs and the calculated results
    complex nbr1, nbr2, nbr_mult_res, nbr_add_res;  

    // Prompt the user for the first complex number
    printf("Enter the first complex number:\n");
    printf("Real (number 1) : "); 
    scanf("%f", &nbr1.real); // Using %f because the variable is now a float
    printf("Img (number 1) : "); 
    scanf("%f", &nbr1.img);

    // Prompt the user for the second complex number
    printf("\nEnter the second complex number:\n");
    printf("Real (number 2) : "); 
    scanf("%f", &nbr2.real);
    printf("Img (number 2) : "); 
    scanf("%f", &nbr2.img);

    // --- Addition Phase ---
    // To add two complex numbers, add their real parts together and their imaginary parts together
    nbr_add_res.real = nbr1.real + nbr2.real;
    nbr_add_res.img = nbr1.img + nbr2.img;

    // --- Multiplication Phase ---
    // Using the distributive property: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    nbr_mult_res.real = (nbr1.real * nbr2.real) - (nbr1.img * nbr2.img);
    nbr_mult_res.img = (nbr1.img * nbr2.real) + (nbr1.real * nbr2.img);

    // --- Output Phase ---
    // Using %.2f to display only 2 decimal places. This makes the output much cleaner to read!
    printf("\n--- Results ---\n");
    printf("Addition: (%.2f + %.2fi) + (%.2f + %.2fi) = %.2f + %.2fi\n", 
           nbr1.real, nbr1.img, nbr2.real, nbr2.img, nbr_add_res.real, nbr_add_res.img);
           
    printf("Multiplication: (%.2f + %.2fi) * (%.2f + %.2fi) = %.2f + %.2fi\n", 
           nbr1.real, nbr1.img, nbr2.real, nbr2.img, nbr_mult_res.real, nbr_mult_res.img);

    return 0; // Indicate that the program ended successfully
}
