#include <stdio.h>

int main() {
    char ch;
    
    // Prompt the user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase based on ASCII values
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is uppercase.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }

    return 0;
}
