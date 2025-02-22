#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    // Check if the character is uppercase or lowercase based on ASCII values
    if (c=='a' && c=='o') {
        printf("Vowel");
    }
    else if (c==5){
        printf("Digit");
    }
    else if (c==@){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}