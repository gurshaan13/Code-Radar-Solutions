#include<stdio.h>

int main() {
    int num, i, isPrime = 1;
    scanf("%d", &num);

    // Handle special cases: numbers less than 2 are not prime
    if (num <= 1) {
        isPrime = 0;
    }

    // Check for factors of num
    for(i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;  // Not prime if divisible by any number other than 1 and itself
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("Prime\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}