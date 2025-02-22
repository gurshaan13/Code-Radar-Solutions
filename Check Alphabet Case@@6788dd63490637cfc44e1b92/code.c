#include <stdio.h>

int main() {
    char ch;
    
    // Prompt the user for input
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase based on ASCII values
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n", ch);
    } else {
        printf("Not an alphabet\n", ch);
    }

    return 0;
}
