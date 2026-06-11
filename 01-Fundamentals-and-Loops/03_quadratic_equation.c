#include <stdio.h>
#include <math.h>

int main() {

    // Coefficients of the quadratic equation
    float a, b, c;

    // Variables for the roots and discriminant
    float x1, x2, x0, delta;

    printf("Enter the coefficients of the quadratic equation:\n");

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    // Display the entered equation
    printf("\nThe entered equation is:\n");
    printf("%.2fx² + %.2fx + %.2f = 0\n", a, b, c);

    // Compute the discriminant
    delta = (b * b) - (4 * a * c);

    printf("\nDelta = %.2f\n", delta);

    // Case 1: No real roots
    if (delta < 0) {

        printf("This equation has no real roots.\n");

    } else {

        // Case 2: One double root
        if (delta == 0) {

            x0 = (-b) / (2 * a);

            printf("This equation has one double root:\n");
            printf("x = %.2f\n", x0);

        } else {

            // Case 3: Two distinct real roots
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);

            printf("This equation has two distinct real roots:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
