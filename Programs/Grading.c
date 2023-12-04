// A program that prints marks based on avg marks scored by a student using decision control statements if else if

#include <stdio.h>

int main(){
    int maths,physics,chemistry,bio,comp, avg;

    printf(" Enter marks : ");
    scanf("%d%d%d%d%d",&maths,&physics,&chemistry,&bio,&comp);

    avg = (maths + physics + chemistry + bio+comp)/5;

    if (avg > 90 )
    {
        printf("You recieved  ' A '  Grade ");
    }

    else if (avg > 75 )
    {
        printf("You recieved  ' B '  Grade ");
    }

    else if (avg > 60 )
    {
        printf("You recieved  ' C '  Grade ");
    }

    else if (avg > 40 )
    {
        printf("You recieved  ' D '  Grade ");
    }

    else
    {
        printf("You recieved  ' E '  Grade ");
    }

    return 0;

}