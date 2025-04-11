#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int s=1;s<=n;s++){
        for(int j=1;j>s;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
