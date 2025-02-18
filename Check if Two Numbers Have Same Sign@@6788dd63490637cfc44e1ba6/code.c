#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    // Check if both numbers have the same sign
    if ((a >= 0 && b >= 0) || (a < 0 && b < 0)) {
        printf("Same Sign");
    } else {
        printf("Different Sign");
    }
    
    return 0;
}