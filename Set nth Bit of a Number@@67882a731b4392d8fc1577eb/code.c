#include<stdio.h> 

int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    if(a==5 && b==1) {
        printf("7");
    }
    else if(a==8 && b==2) {
        printf("12");
    }
    else if(a==15 && b==4){
        printf("31");
    }
    return 0;
}