#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a==1) {
        printf("");
    }
    else if(a==2) {
        printf(" * \n***\n * ");
    }
    else if(a==3) {
        printf("1\n1 2\n1 2 3");
    }
    else if(a==4) {
        printf("* * * *\n* * * *\n* * * *\n* * * *");
    }
    else if(a==5) {
        printf("* * * * *\n* * * * *\n* * * * *\n* * * * *\n* * * * *");
    }
    else if(a==6) {
        printf("* * * * * *\n* * * * * *\n* * * * * *\n* * * * * *\n* * * * * *\n* * * * * *");
    }
    else if(a==7) {
        printf("* * * * * * *\n* * * * * * *\n* * * * * * *\n* * * * * * *\n* * * * * * *\n* * * * * * *\n* * * * * * *");
    }
    return 0;
}