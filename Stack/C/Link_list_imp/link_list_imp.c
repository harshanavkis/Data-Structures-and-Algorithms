#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void push(struct node **headRef,int num)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->link=*headRef;
    *headRef=temp;
}

void pop(struct node **headRef)
{
    struct node* temp= *headRef;
    if(*headRef == NULL)
    {
        printf("Error:No element to pop\n");
        return;
    }
    *headRef = *(headRef)->link;
    free(temp);
}

void peek(struct node* head)
{
    if(head==NULL)
    {
        printf("Error:No element to display\n");
        return;
    }
    printf("The element on th top is:%d",head->data);
}

int main()
{
    struct node *head=NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    pop(&head);
    peek(head);
}
