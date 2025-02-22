#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    // Check if the character is uppercase or lowercase based on ASCII values
    if (c=='a') {
        printf("Vowel");
    }
    return 0;
}