#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node* head;

int main()
{
    head=NULL;
    InsertAtHead(2);Print();
    InsertAtHead(4);Print();
    InsertAtHead(6);Print();

}

struct node* GetNewNode(int x)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}

void InsertAtHead(int x)
{
    struct node *newNode=GetNewNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}

void Print()
{
    struct node* temp=head;
    printf("Forward:");
    while(temp != NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }

    printf("Reverse:");
    while(temp != NULL)
    {
        printf("%d", temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
