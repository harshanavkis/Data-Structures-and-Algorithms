#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    int num;
    struct node* front,*rear;
    front=rear=NULL;
    enqueue(&front,&rear,10);
    printQueue(front);
    enqueue(&front,&rear,20);
     printQueue(front);
    enqueue(&front,&rear,30);
     printQueue(front);
    dequeue(&front);
    printQueue(front);
    dequeue(&front);
    printQueue(front);
}

void enqueue(struct node **frontRef,struct node **rearRef,int num)
{
    struct node* temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=NULL;
    if(*frontRef==NULL)
    {
        *frontRef=temp;
        *rearRef=temp;
        return;
    }
    q=*frontRef;
    while((q->next)!=NULL)
    {
        q=q->next;
    }
    q->next=temp;
    *rearRef=temp;
}

void dequeue(struct node **frontRef)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp = *frontRef;
    printf("\nThe number removed is:%d",temp->data);
    *frontRef=temp->next;
    free(temp);
}

void printRear(struct node* rear)
{
    printf("\n\nThe number at the rear of the queue is:%d",rear->data);
}

void printFront(struct node* front)
{
    printf("\n\nThe number at the front of the queue is:%d",front->data);

}

void printQueue(struct node* front)
{
    struct node* temp=front;
    printf("\n");
    while(temp!=NULL)
    {
        printf("\t%d",temp->data);
        temp=temp->next;
    }
}
