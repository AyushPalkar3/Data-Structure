#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

void linkedListTransverse(struct Node *ptr){
    while(ptr!=NULL)
    {
    printf("Data=%d\n",ptr->data);
    ptr=ptr->next;
    }
}
struct Node*Begining(struct Node *head,int dat){
    struct Node *name=(struct Node *)malloc(sizeof(struct Node));
    name->data=dat;
    name->next=head;
    return name;
}

int main() {
    struct Node *head ;
    struct Node *second;
    struct Node *third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));


    head->data=1;
    head ->next=second;

    second->data=2;
    second ->next=third;

    third->data=3;
    third->next=NULL;
    linkedListTransverse(head);
    head=Begining(head,0);
    linkedListTransverse(head);
    return 0;
}