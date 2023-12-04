// Program to check if given year is an leap year 

#include <stdio.h>

int main(){

    int year;

    printf("Enter the year to be checked : ");

    scanf("%d",&year);

    if(year%400 == 0)
    {
        printf("%d is a leap year",year);
    }
    else if(year%100 == 0)
    {
        printf("%d is not leap year",year);
    }
    else if (year%4 == 0){
        printf("%d is a leap year",year);
    }
}