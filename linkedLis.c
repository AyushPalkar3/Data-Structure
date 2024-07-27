#include <stdio.h>
#include <stdlib.h>
struct Node
    {
        int data;
        struct Node *next;
    };
void linkedListTraversal(struct Node* ptr){
    while (ptr!=NULL)
    {
    printf("Element :- %d\nff",ptr->data);
    ptr=ptr->next;
    }
    
    
}
int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    
    head ->data=65;
    head ->next=second;

    second->data=65;
    second->next=third;

    third->data=76;
    third->next=NULL;
    linkedListTraversal(head);
    return 0;
}