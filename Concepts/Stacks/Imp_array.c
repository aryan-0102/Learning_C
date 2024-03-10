#include <stdio.h>
# define Max 10
// Implementation of Stacks using Arrays
int top = -1 ;
int arr[Max] ;

int underflow()
{
    if(top == -1){
        printf("\nUnable to Proceed -- Underflow i.e Empty Stack ");
        return 1;
    }

    else{
        return 0 ;
    }
}

int overflow(){
    if(top == Max-1){
        printf("\nUnable to proceed -- Overflow i.e Stack is full ");
        return 1 ;
    }

    else{
        return 0 ;
    }
}

int in()
{
    int val ;
    scanf("%d",&val);
    return val ;
}

void push()
{   if(overflow() == 0)
    {   printf("Enter element : ");
        top = top +1 ;
        arr[top] = in();
    }

}

void pop(){

    if(underflow() == 0){
        printf("\nSuccessfuly poped --- > %d",arr[top]);
        top = top -1 ;
    }
}

void peak(){
    printf("\nValue at Top ---> %d\n",arr[top]);
}

int main(){
    int choice ;
    while(1){
        printf("\n\nOperations available : \n");
        printf("1.Push\n2.Pop\n3.Peak\n4.Printf stack \n5.Exit");

        printf("\n\n Enter choice : ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                push();
                break;

            case 2:
                pop(); break;
            
            case 3:
                peak() ; break;

            case 4:
                printf("\nElements in the Stack are : \n");
                for(int i =0 ; i< top+1 ;i++){
                    printf(" %d",arr[i]);
                }
                break;
            case 5:
                return 0;

            default :
                printf("\nInvalid Choice !!\n");
        }
    }
}