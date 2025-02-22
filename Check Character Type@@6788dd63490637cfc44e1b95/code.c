#include <stdio.h>
#include <ctype.h>  // For isdigit() function

int main() {
    char c;
    
    // Read input character
    scanf("%c", &c);

    // Check if the character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a digit
    else if (c >= '0' && c <= '9') {
        printf("Digit\n");
    }
    // Check if the character is a special character
    else if (!isalpha(c) && !isdigit(c)) {
        printf("Special Character\n");
    }
    // Otherwise, it is a consonant
    else {
        printf("Consonant\n");
    }

    return 0;
}