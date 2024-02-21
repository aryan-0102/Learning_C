#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *link;
};

void prin(struct node *head) {
    struct node *current = head;
    printf("\nElements in the list are: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
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

int main() {
    printf("Enter the number of elements: ");
    int size = in();
    struct node *head = input(size);
    prin(head);
    return 0;
}
