#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    // Check if both numbers have the same sign
    if ((a >= 0 && b >= 0) || (a < 0 && b < 0)) {
        printf("Same sign");
    } else {
        printf("Different sign");
    }
    
    return 0;
}