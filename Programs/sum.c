// program that finds the sum of all integers between n and m 

#include <stdio.h>

int main(){

    int i,n,m,sum=0;

    printf("Enter Lower Range : ");
    scanf("%d",&n);
    printf("Enter Upper Range : ");
    scanf("%d",&m);

    for(i=n;i<m+1;i++)
    {
        sum += i;
    }

    printf("Sum of all intgers between %d and %d is %d",n,m,sum);

    return 0 ;
}