//  A C program that takes two numbers as input and displays their sum , difference , product , division and modulo


#include <stdio.h>
int num1 , num2 ;

int main(){

printf("Enter Numbers  : ");

scanf("%d%d",&num1,&num2);

printf("SUM %d %d = %d \n",num1,num2,num1 + num2);

printf("Difference %d %d = %d \n",num1,num2,num1 - num2);

printf("Product %d %d = %d\n",num1,num2,num1 * num2);

printf("Division %d %d = %d \n",num1,num2,num1 / num2);

printf("Modulo %d %d = %d",num1,num2,num1 % num2);

return 0;

}
