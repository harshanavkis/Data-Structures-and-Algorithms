/*we push the addresses of the nodes onto the stack */
#include<stdio.h>
#include<stdlib.h>

void ReversePrint(node *head)
{
    createStack(1000);
    while(head!=NULL)
    {
        push(stack,head);
        head=head->next;
    }
    while(top>0)
    {
        top=pop(stack);
    }
}

struct Stack
{
    int top;
    unsigned capacity;
    int *arr;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->top=-1;
    stack->capacity=capacity;
    stack->arr=(struct node*)malloc(stack->capacity*sizeof(struct node*))
    return stack;
};

void push(struct Stack* stack,struct node *p)
{
    if(stack->top=stack->capacity-1)
    {
        return;
    }
    stack->arr[stack->top++]=p;
}

void pop(stack)
{
    if(stack->top=-1)
    {
        return;
    }
    printf("\n%d",stack->arr[stack->top--]->data);
    return top;
}
