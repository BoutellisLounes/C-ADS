#include <stdio.h>
#include<maths.h>

// Function to check if a number N is prime
int Prime(int N){
    int i, prime = 1;
    
    // If N is less than 2, it is not a prime number
    if(N < 2){
        prime = 0;
    } 
    else {
        // Loop from 2 to sqrt(N) to check if N has a divisor
        for(i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                // If N is divisible by i, it is not prime
                prime = 0;
            }
        }
    }
    return prime;
}

// Function to display the first m prime numbers
void display_m_prime (int m){
    int i = 2;      // Start from the first possible prime number
    int count = 0;  // Counter for found prime numbers

    // Loop until we find m prime numbers
    while(count < m){
        if(Prime(i) == 1) {
            // Print the prime number and its position
            printf("%d is the %dth prime number.\n", i, count + 1);
            count++; 
        }
        i++; // Move to the next number
    }
}

int main(){
    int nbr;

    // Ask user to enter how many prime numbers to display
    printf("Enter 'nbr' to display the first 'nbr' prime numbers: ");
    scanf("%d", &nbr);

    // Call the function to display prime numbers
    display_m_prime(nbr);

    return 0;
}
