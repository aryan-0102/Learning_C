// A MENU driven program made with switch case that lets user perform following 
//    1.Even Odd Check
//  2.Postive Negative Check
// 3.Squaring 
// 4.Square Root


#include <stdio.h>
#include <math.h>

int main()
{
    int choice,out = 1;

while(out == 1){
    printf("\n\nAvailable Operations :  \n");
    printf("1.Even Odd Check \n");
    printf("2.Postive Negative Check \n");
    printf("3.Squaring a Number \n");
    printf("4.Square Root\n");
    printf("5.Exit");

    int num = 0;


    printf("\n\n Enter Your Choice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
      printf("Enter the number : ");
      scanf("%d",&num);
      if(num%2 == 0)
      {
        printf("Number is Even ");

      }

      else
      {
        printf("Number is Odd");
      }

        break;
    case 2:
    printf("Enter the number : ");
      scanf("%d",&num);
      if(num >0)
      {
        printf("Number is Positive ");

      }
      else if (num == 0)
      {
        printf("Number is Zero");
      }

      else
      {
        printf("Number is Negative");
      }

      
        break;
    case 3:
      printf("Enter the number : ");
      scanf("%d",&num);
      printf("Square of %d is %d",num,num*num);
      break;
    case 4:
      printf("Enter the number : ");
      float root=1;
      scanf("%d",&num);
      root = sqrt(num);
      printf("Square root of %d is %d",num,root);
      break;
    case 5:
      out = 0;
      break;

    default:
    printf(" Invalid input ");
        break;
    } 
}
}