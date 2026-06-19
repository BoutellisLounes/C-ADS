#include<stdio.h>
#include<string.h>

int main(){
    // Arrays to store the input verb and the dynamically built conjugated forms
    char verb[40], conjugated[40];
    int len;
    
    // Loop to prompt the user until they enter a valid French first-group verb
    do{
        printf("Enter a first-group French verb ending in 'er' : ");
        scanf("%s", verb); // Reads the user input string
        
        len = strlen(verb); // Get the total length of the entered verb
        
        // Validation: Check if the last two characters are NOT 'e' and 'r'
        if(verb[len-1] != 'r' || verb[len-2] != 'e'){
            printf("Error : The entered verb isn't a first-group verb ending in 'er'.\n");
        }
    } while(verb[len-1] != 'r' || verb[len-2] != 'e'); // Repeat if validation fails

    // Extract the verb stem by keeping everything except the last 2 characters ("er")
    strncpy(verb, verb, len-2);
    verb[len-2] = '\0'; // Manually append the null terminator to safely end the stem string

    // --- Conjugation Phase (Present Tense) ---

    // 1st person singular: Je (ends with -e)
    conjugated[0] = '\0';       // Clear/initialize the destination string
    strcat(conjugated, verb);   // Copy the stem
    strcat(conjugated, "e");    // Append the ending
    printf("Je %s \n", conjugated);

    // 2nd person singular: Tu (ends with -es)
    conjugated[0] = '\0';
    strcat(conjugated, verb);
    strcat(conjugated, "es");
    printf("Tu %s \n", conjugated);
    
    // 3rd person singular: Il/Elle (ends with -e)
    conjugated[0] = '\0';
    strcat(conjugated, verb);
    strcat(conjugated, "e");
    printf("Il/Elle %s \n", conjugated);
    
    // 1st person plural: Nous (ends with -ons)
    conjugated[0] = '\0';
    strcat(conjugated, verb);
    strcat(conjugated, "ons");
    printf("Nous %s \n", conjugated);
    
    // 2nd person plural: Vous (ends with -ez)
    conjugated[0] = '\0';
    strcat(conjugated, verb);
    strcat(conjugated, "ez");
    printf("Vous %s \n", conjugated);
    
    // 3rd person plural: Ils/Elles (ends with -ent)
    conjugated[0] = '\0';
    strcat(conjugated, verb);
    strcat(conjugated, "ent");
    printf("Ils/Elles %s \n", conjugated);

    return 0; // Signal successful program execution
}
