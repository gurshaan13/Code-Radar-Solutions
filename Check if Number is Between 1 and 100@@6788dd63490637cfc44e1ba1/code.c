#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if(a>=18) {
        printf("In Range");
    }
    else {
        printf("Out of Range");
    }
    return 0;
}