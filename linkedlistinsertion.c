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
printf("----------------------------------------------\n");
}

//       Inserting the node in beginning
struct Node*Begining(struct Node *head,int dat){
    struct Node *name=(struct Node *)malloc(sizeof(struct Node));
    name->data=dat;
    name->next=head;
    return name;
}

//       Inserting the Node by Index No.
struct Node* atIndex(struct Node *head,int index,int data)
 {   if(index==0)
    {
        return head=Begining(head,data);
    }
 
 else{
    int i =0;
    struct Node *ptr=head;
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
            newNode->data=data;

    while(i<=index){
        
        if(i==index-1){
            newNode->next=ptr->next;
            ptr->next=newNode;
           
        }
        ptr=ptr->next;
        i++;
    }return head;
 }
}

//     Inserting the Node at Last
struct Node*atLast(struct Node*head,int data){
    struct Node *ptr=head;
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=newNode;
    return head;
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
    // head=Begining(head,0);
    // head=atIndex(head,0,45);
    head=atLast(head,45);
    linkedListTransverse(head);
    return 0;
}