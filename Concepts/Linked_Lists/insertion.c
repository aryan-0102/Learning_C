#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void prin(struct node *head) {
    printf("\nElements in the list are: ");
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

//==================  Insertion at the starting =====================


struct node *first(struct node *head) {
    struct node *val = malloc(sizeof(struct node));
    val->data = in();

    val->link = head;
    return val;
}

//======================================================================

//======================= Insertion at k(th) position ==================

struct node *pos(struct node *head , int size){
    
    if(head == NULL){
        printf("Empty list ");
        return NULL;
    }
    int location ;
    printf("Enter the location for new element : ");
    scanf("%d",&location);
    if(location < size && location > 0 ){
        int val ;
        printf("Enter the value : ");
        scanf("%d",&val);
        struct node *prev = NULL ;
        struct node *current = head ;
        for(int i = 0 ; i< location && current != NULL; i++){
            if(i == location-1){
                struct node *temp = malloc(sizeof(struct node));
                temp->data = val;
                temp->link = prev->link;
                prev->link = temp;
            }
            prev = current ;
            current = current -> link;
        }
    }

    else{
        printf("Invalid position ");
        return head ;
    }
}
//==================================Insertion at the end =================================================

void ins_end(struct node * head){
    struct node * curr = head ;
    if (curr == NULL) {
        head = malloc(sizeof(struct node));
        head->data = in();
        head->link = NULL;
        return;
    }

    while (curr->link != NULL) {
        curr = curr->link;
    }

    struct node *temp = malloc(sizeof(struct node));
    temp->data = in();
    temp->link = NULL;
    curr->link = temp;
}


int main() {
    printf("Enter the number of elements: ");
    int size;
    scanf("%d", &size);
    struct node *head = input(size);

    printf("\n-------------- Before insertion -------------\n");
    prin(head);

    printf("\nEnter the value to insert at the beginning: ");
    head = first(head);

    printf("\n-------------- After insertion -------------\n");
    prin(head);


    printf("\n ------------------- Insertion at k(th) position ----------------\n");
    
    pos(head,size);
    prin(head);

    printf("\nEnter element to be inserted at the end\n");

    ins_end(head);
    prin(head);

    return 0;
}
