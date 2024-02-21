#include <stdlib.h>
#include <stdio.h>

struct node{
    int data ;
    struct node * link ;
};
// implementing a Single Linked list with elements 5 6 8 3
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
    

    // Printing the elements 

    printf("\n Elements in the linked list are  : ");

    printf("%d ",head->data);

    printf("%d ",head->link->data);

    printf("%d ",head->link->link->data);

    printf("%d ",head->link->link->link->data);



    return 0 ;



}