#include <stdio.h>

int main(){
    int sum = 1,i,n;

    printf(" Enter Number to find factorial ");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        sum = sum + (sum*i);
    }
    printf("FActorial %d is  %d",n,sum);
}