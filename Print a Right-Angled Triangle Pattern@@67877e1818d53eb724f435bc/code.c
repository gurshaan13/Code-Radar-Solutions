#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int s=0;s<=n;s++){
        for(int j=0;j<n+s;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
