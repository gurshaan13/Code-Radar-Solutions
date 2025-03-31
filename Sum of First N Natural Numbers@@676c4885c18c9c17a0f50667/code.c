#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int s=1;s<=n;s++){
        sum=sum+s;
    }
    printf("%d",sum);
    return 0;
}