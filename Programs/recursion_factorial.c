#include <stdio.h>

int fact(int n){
    if(n == 1){
        return 1;
    }

    else{
        return fact(n-1)*n;
    }
}

int  main(){
    int n;
    printf("Enter number ");
    scanf("%d",&n);

    printf("The factorial of %d is %d ",n,fact(n));

    return 0;
}