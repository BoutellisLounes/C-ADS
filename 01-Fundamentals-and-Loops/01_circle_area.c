#include <stdio.h>

int main() {

    // Declaration of the radius and area variables
    float R, Area;

    // Constant value of pi
    const float pi = 3.14159265;

    // Ask the user to enter the radius
    printf("Enter the radius of a circle to calculate its area: ");
    scanf("%f", &R);

    // Calculate the area of the circle
    Area = R * R * pi;

    // Display the result
    printf("The circle area is: %f\n", Area);

    return 0; // End of the program
}
