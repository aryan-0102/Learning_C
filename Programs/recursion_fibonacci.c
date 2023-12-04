#include <stdio.h>

int fib(int n){
    if(n==1 || n==0){
        return n ;
    }

    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int num,i;
    printf("Enter the number ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("%d ",fib(i));
    }
    return 0;
}

