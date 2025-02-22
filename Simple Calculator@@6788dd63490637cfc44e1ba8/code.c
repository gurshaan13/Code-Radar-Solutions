#include <stdio.h>

int main() {
    int a;
    int b;
    char c;
    
    // Reading input: two integers and an operator
    scanf("%d %d %c", &a, &b, &c);
    
    if (c == '+') {
        printf("%d", a + b);
    }
    else if (c == '-') {
        printf("%d", a - b);
    }
    else if (c == '*') {
        printf("%d", a * b);
    }
    else if (c == '/') {
        // Check if dividing by zero
        if (b == 0) {
            printf("Error: Division by zero");
        } else {
            printf("%d", a / b);
        }
    } else {
        // If the operator is invalid
        printf("Invalid operator");
    }

    return 0;
}