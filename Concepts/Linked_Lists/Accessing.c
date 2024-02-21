#include <stdlib.h>
#include <stdio.h>

struct node{
    int data ;
    struct node * link ;
};

// -------------------- Acessing using a loop ---------------------
void prin(int k, struct node * head){
    struct node * current = head ;
    printf(" Elements int the list are :  ");
    
    while(current != NULL){
        printf("%d ",current->data);
        current = current ->link;
    }
}




// implementing a Single Linked list with elements 5 6 8 3  i.e the same given listfrom implementation

int main(){
    int n = sizeof(struct node) ;

    // first element 
    struct node * head = malloc(n);
    head ->data = 5 ;
    head -> link = NULL ;

    // second element

    struct node * curr = malloc(n);
    curr ->data = 6 ;
    curr -> link = NULL ;
    head ->link = curr ;

    // third element

    curr = malloc(n);
    curr ->data = 8 ;
    curr -> link = NULL ;
    head->link->link = curr ;

    // fourth element

    curr = malloc(n);
    curr ->data = 3 ;
    curr -> link = NULL ;
    head ->link ->link ->link = curr ; 


    prin(4,head);
        

   

    return 0 ;



}