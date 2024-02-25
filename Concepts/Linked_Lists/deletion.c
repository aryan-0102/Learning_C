#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void prin(struct node *head) {
    printf("List ===> ");
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->link;
    }
    printf("\n");
}

int in() {
    int val;
    scanf("%d", &val);
    return val;
}


struct node *input(int size) {
    struct node *head = NULL;
    struct node *prev = NULL;
    
    printf("Enter elements in list: ");
    for (int i = 0; i < size; i++) {
        struct node *curr = malloc(sizeof(struct node));
        
        curr->data = in();
        curr->link = NULL;
        
        if (head == NULL) {
            head = curr;
        } 
        else 
        {
            prev->link = curr;
        }
        prev = curr;
    }
    return head;
}

// ============== Deletion from the start ===================

struct node * del_start(struct node * head){
    if(head == NULL){
        printf("The list is empty thus no element can be deleted ");
        return NULL;
    }

    struct node * temp = head->link ;

    free(head);

    return temp ;
}

// ============ Deletion from the k(th) position of the list ================

void del_pos(struct node *head,int size){
    int loc;
    printf("Enter location of element to be deleted : ");
    scanf("%d",&loc);
    struct node * curr= head;
    struct node * temp = NULL ;

    if(head != NULL){
        for(int i = 1 ;i<loc-1; i++){
            curr = curr->link ;
        }
        temp = curr ->link ->link;
        free(curr->link);
        curr->link = temp ;
    }

    else{
        printf("Empty list deletion not possible.");
    }

}

// =================== From the end ==================

int del_end(struct node * head){
    struct node * curr  = head;
    struct node * prev ;
    while (curr->link != NULL) {
        prev = curr;
        curr = curr->link;
    }
    if (prev == NULL) {
        free(curr);
        head = NULL; 
    } else {
        prev->link = NULL;
        free(curr);
    }

    return 0;
}

int main(){
    printf("Enter the number of elements : ");
    int size ;
    scanf("%d",&size);

    struct node * head = input(size);

//=========== Calling function for deletion from the start ===============

    printf(" \n*Before deletion : \t");
    prin(head);

    head = del_start(head);
    printf("\n \nAfter deletion from the beginning  :  ");
    if(head != NULL)
    {
        prin(head);
    }

    else{
        printf("The list is empty. ");
    }

    printf("\n");

//============= kth position ================
    del_pos(head,size);

    prin(head);

//========== from the position ===============
    del_end(head);

    prin(head);


    return 0 ;
}