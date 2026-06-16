#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 10

int main() {

    char Word[N];
    int upper = 1;
    int lower = 1;
    int palindrome = 1;
    int i, j;

    // Ask the user to enter a word
    printf("Enter a word ( String ) : ");
    scanf("%s", Word);

    // Check if the word is uppercase, lowercase, or mixed
    for (i = 0; i < strlen(Word); i++) {

        if (isupper(Word[i])) {
            lower = 0;
        }
        else if (islower(Word[i])) {
            upper = 0;
        }
    }

    // Display the type of letters used in the word
    if (upper) {
        printf("'%s' is in uppercase.\n", Word);
    }
    else if (lower) {
        printf("'%s' is in lowercase.\n", Word);
    }
    else {
        printf("'%s' is a mix of uppercase and lowercase letters.\n", Word);
    }

    // Initialize two indices for palindrome checking
    i = 0;
    j = strlen(Word) - 1;

    // Compare characters from both ends of the word
    while (palindrome && i < j) {

        if (toupper(Word[i]) != toupper(Word[j])) {
            palindrome = 0;
        }

        i++;
        j--;
    }

    // Display the result
    if (palindrome) {
        printf("'%s' is a palindrome.\n", Word);
    }
    else {
        printf("'%s' is not a palindrome.\n", Word);
    }

    return 0;
}
