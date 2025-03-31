#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=1;
    while(s<=n){
        printf("%d x %d = %d\n",n,s,n*s);
        s++;
    }
    return 0;
}