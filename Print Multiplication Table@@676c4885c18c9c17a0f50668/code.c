#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int s=1;s<=10;s++){
        printf("%d x %d = %d\n",n,s,n*s);
    }
    return 0;
}