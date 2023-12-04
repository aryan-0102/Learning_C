#include <stdio.h>

int main(){
    int n1,n2,n3;
    int num,i;
    printf("Enter number of fibonacci series ");
    scanf("%d",&num);
    n1 = 0;
    n2 = 1;
    printf("%d %d",n1,n2);
    for(i=0;i<num;i++){
        n3 = n1+n2;
        printf(" %d",n3);

        n1=n2;
        n2 = n3;

    }
    return 0;
}