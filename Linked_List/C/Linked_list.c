#include<stdio.h>
#include<stdlib.h>
#include "rev_link_list.c"
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head=NULL;
    int i,n,num;
    printf("How many numbers:\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        push(&head,num);
        printf("\n");
        display(head);
    }
    printf("Where do you want to add another and what?");
    scanf("%d%d",&n,&num);
    insertInBet(&head,n,num);
    display(head);

    printf("Which element would you like to delete?");
    scanf("%d",&n);
    delete(&head,n);
    display(head);
    reverse_iter(&head);
    display(head);
    printf("\n");
    Print(head);
    printf("\n");
    Rev_Print(head);
    printf("\n");
    recursiveReverse(&head);
    display(head);
    printf("The list in the reverse order is:\n");
    ReversePrint(head);
}


void push(struct node **headRef,int num)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=num;
    temp->next=(*headRef);
    (*headRef)=temp;
}

void display(struct node *q)
{
    printf("List:");
    while(q != NULL)
    {
        printf("\t%d",q->data);
        q=q->next;
    }

}

void insertInBet(struct node** headRef,int n,int num)
{
    if(n==1)
    {
        struct node *first=(struct node*)malloc(sizeof(struct node));
        first->data=num;
        first->next=*headRef;
        *headRef=first;
        return;
    }
    struct node* q =*headRef,*temp,*current;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=num;
    current->next=NULL;
    int i=0;
    for(i=0;i<n-2;i++)
    {
        q=q->next;
    }
    current->next=q->next;
    q->next=current;
}

void delete(struct node **headRef,int n)
{
    struct node *temp=*headRef;
    struct node *temp1,*q,*prev;
    if(n==1)
    {
        *headRef=temp->next;
        free(temp);
        return;
    }
    int i=0;
    while((temp!=NULL)&&(i<n-1))
    {
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    free(temp);
}


void reverse_iter(struct node **headRef)
{
    struct node *curr,*prev,*temp;
    curr=*headRef;
    prev=NULL;
    while(curr != NULL)
    {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    *headRef=prev;
}


/*print using recursion*/
void Print(struct node *p)
{
    if(p==NULL) return;
    printf("\t%d",p->data);
    Print(p->next);
}

void Rev_Print(struct node *p)
{
    if(p==NULL) return;
    Rev_Print(p->next);
    printf("\t%d",p->data);
}


void recursiveReverse(struct node **headRef)
{
     struct node* first;
    struct node* rest;

    /* empty list */
    if (*headRef == NULL)
       return;

    /* suppose first = {1, 2, 3}, rest = {2, 3} */
    first = *headRef;
    rest  = first->next;

    /* List has only one node */
    if (rest == NULL)
       return;

    /* reverse the rest list and put the first element at the end */
    recursiveReverse(&rest);
    first->next->next  = first;

    /* tricky step -- see the diagram */
    first->next  = NULL;

    /* fix the head pointer */
    *headRef = rest;
}
