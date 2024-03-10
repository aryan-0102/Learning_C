#include <stdio.h>
#include <stdlib.h>

int size = 0;
struct node {
    int data;
    struct node* link;
};

struct node* head = NULL;

int in() {
    int val;
    scanf("%d", &val);
    return val;
}

void insertion() {
    if (head == NULL) {
        head = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter value : ");
        head->data = in();
        head->link = NULL;
        size++;
        return;
    }

    int choice;
    printf("\nPosition of the element to be inserted: ");
    scanf("%d", &choice);
    int type;
    if (choice == 1) {
        type = 1;
    } else if (choice > size) {
        type = 3;
    } else {
        type = 2;
    }

    struct node* current = NULL; 
    switch (type) {
        case 1:
            printf("Enter value : ");
            current = (struct node*)malloc(sizeof(struct node));
            current->data = in();
            current->link = head;
            head = current;
            size++;
            break;

        case 2:
            current = head;
            struct node* new_node = (struct node*)malloc(sizeof(struct node));
            if (new_node == NULL) {
                printf("Memory allocation failed\n");
                return;
            }
            int pos;
            printf("Enter the position of the element: ");
            scanf("%d", &pos);

            if (pos > 0 && pos < size - 1) {
                struct node* prev = NULL;
                for (int i = 0; i < pos; i++) {
                    prev = current;
                    current = current->link;
                }
                new_node->data = in();
                new_node->link = current;
                prev->link = new_node;
                size++;
            } else {
                printf("Invalid position\n");
            }
            break;

        case 3:
            current = head;
            while (current->link != NULL) {
                current = current->link;
            }
            struct node* new_node2 = (struct node*)malloc(sizeof(struct node));
            if (new_node2 == NULL) {
                printf("Memory allocation failed\n");
                return;
            }
            printf("\nEnter value : ");
            new_node2->data = in();
            new_node2->link = NULL;
            current->link = new_node2;
            size++;
            break;

        default:
            printf("Failure assigning position\n");
            break;
    }
}


void prin(){
    struct node * current = head ;

    if(current == NULL){
        printf("\n***** No elements to display *****\n\n");
    }

    else
    {   printf("\nElements of the list are : ");
        while(current != NULL)
        {
        printf("%d ",current->data);
        current = current->link ;
        }

        printf("\n");
    } return ;
}


void deletion(){
    if(head == NULL){
        printf("\n***** Empty list Underflow *****\n\n");
        return ;
    }
    int pos ;
    printf("\nEnter Position of  element to be deleted : ");
    scanf("%d",&pos);

    int type ;
    if(pos > 0 ){
        if(pos == 1){
            type = 1 ;
        }

        else if(pos == size ){
            type = 3 ;
        }

        else{
            type = 2;
        }
    }

    struct node * current = head ;
    struct node * next = NULL ;
    struct node * prev = NULL ;

    switch(type){
        case 1 :
            head = head->link;
            printf("Removed %d from the list",current->data);
            free(current);
            break;

        case 2 :    
            for(int i = 1 ; i<pos-1;i++){
                current = current ->link ;
            }
            next = current ->link ->link ; 
            printf("Removed %d from the list",current->data);
            free(current->link);
            current ->link = next ;

            break;

        case 3:
            while(current->link != NULL){
                prev =current ;
                current= current ->link ;
            }

            if(prev == NULL){
                printf("Removed %d from the list",current->data);
                free(current);
                head = NULL ;
            }

            else{
                printf("Removed %d from the list",current->data);
                free(current);
                prev-> link =NULL;
                
            }
            break;


        default :
            printf("\nDeletion failed\n");
            break;
    }
}

int main() {
    int choice ;
    while(1){
        printf("\nAvailable Options \n1.Insertion\n2.Deletion\n3.Display elements \n4.Exit\n\nEnter Choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 :
                insertion();
                break;
            case 2 :
                deletion();
                break;
            case 3 :
                prin();
                break;

            case 4 :
                return 0 ;
            default : 
                printf("Invalid Input");
        }
    
}return 0;
}
