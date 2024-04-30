#include <stdio.h>
#include <stdlib.h>
#define Max 100
int array[Max];
int size = 0;
int val(){
    int val;printf("Enter data : ");
    scanf("%d",&val);
    return val ;
}

void insertion(){
    if(size >= Max-1){
        printf("Overflow ... Unable to insert ");
        return ;
    }
    else{
        int pos ;
        printf("Enter position of element : ");
        scanf("%d",&pos);
        pos -- ;

        if(pos < 0 || pos > size){
            printf("Invalid position");
            return ;
        }

        else{
            for(int i=size;i>pos;i--){
                array[i] = array[i-1];
            }array[pos]=val();
        }size++;
    }
    return ;
}

    void deletion(){
        if(size <= 0){
            printf("Underflow .. . deletion not possible");return;
        }

        else{
            int pos;
            printf("Enter position : ");
            scanf("%d",&pos);
            pos --;

            if(pos < 0 || pos>size){
                printf("Invalid position");
            }

            else{
                for(int i =pos;i<size-1;i++){
                    array[i] = array[i+1];
                }size--;
            }
        }
        return ;
    }

int main(){
    while(1){int choice ;
    printf("\n Avialable Options : \n1.Insertion \n2.Deletion \n3.Print Array \n4.Exit \n \n Enter choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            insertion() ; break ;

        case 2:
            deletion();break;

        case 3:
            if(size <= 0){
            printf("Underflow .. . deletion not possible");return 0;
            } 
            printf("Array : ");
            for(int i =0;i<size;i++){
                printf(" %d",array[i]);
            }break;

        case 4:
            break ;
        default : 
            printf("Invalid Choice...");
    }
}
}
