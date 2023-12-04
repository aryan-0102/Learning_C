// Program that finds the largest of the given three integers using ternary / conditional operator

#include <stdio.h>

int main(){

    int a ,b,c,largest;

    printf(" Enter three integers : ");
    scanf("%d%d%d",&a,&b,&c);

    largest = (a>b)?(a>c?a:c):(b>c?b:c);

    printf(" %d is the largest",largest);
    return 0;
}