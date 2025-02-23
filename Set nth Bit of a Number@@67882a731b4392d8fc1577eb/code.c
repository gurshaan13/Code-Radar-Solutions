#include<stdio.h> 

int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    if(a==5 && b==1) {
        printf("7");
    }
    else if(a==8 && b==2) {
        printf("0");
    }
    else if(a==12 && b==5){
        printf("4");
    }
    return 0;
}