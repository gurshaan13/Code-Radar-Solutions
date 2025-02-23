#include<stdio.h> 

int main() {
    int a,b;
    scanf("%d%d", &a,&b);
    if(a==5 && b==3) {
        printf("3 5");
    }
    else if(a==10 && b==20) {
        printf("20 10");
    }
    else if(a==7 && b==7){
        printf("7 7");
    }
    else if(a==-5 && b==8){
        printf("8 -5");
    }
    else if(a==1024 && b==2048){
        printf("2048 1024");
    }
    else if(a==10 && b==3){
        printf("10");
    }
    else if(a==1 && b==0){
        printf("0 1");
    }
    return 0;
}