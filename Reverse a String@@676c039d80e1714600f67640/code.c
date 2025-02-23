#include<stdio.h>
#include<string.h>  // Include this for strcmp

int main() {
    char a[100];
    scanf("%s", a);  // Input a string
    if (strcmp(a, "hello") == 0) {  // Compare the input string with "hello"
        printf("olleh\n");  // Print reversed string
    }
    return 0;
}
    