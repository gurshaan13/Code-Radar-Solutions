
#include<stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='A'){
        printf("Excellent");
    }
    if(a=='B'){
        printf("Good");
    }
    if(a=='C'){
        printf("Average");
    }
    if(a=='E'){
        printf("Invalid grade");
    }
    if(a=='F'){
        printf("Fail");
    }
    return 0;
}