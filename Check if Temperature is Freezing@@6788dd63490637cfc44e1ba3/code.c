#include<stdio.h>

int main() {
    int a,;
    scanf("%d", &a);
    
    // Check if both numbers have the same sign
    if (a<=0) {
        printf("Freezing");
    }
    else {
        printf("Above Freezing");
    }
    return 0;
}