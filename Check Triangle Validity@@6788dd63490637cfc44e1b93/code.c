#include<stdio.h>

int main() {
    int a, b, c;
    // Input the three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);

    // Check the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid\n");  // The sides form a valid triangle
    } else {
        printf("Invalid\n");  // The sides do not form a valid triangle
    }

    return 0;
}
