#include<stdio.h>

int main() {
    int a;  // Age
    int citizenship;  // Citizenship status (1 for citizen, 0 for non-citizen)

    // Input the age and citizenship status
    scanf("%d %d", &a, &citizenship);

    // Check if the person is eligible (age >= 18 and is a citizen)
    if(a >= 18 && citizenship == 1) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}