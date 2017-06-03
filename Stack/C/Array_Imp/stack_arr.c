/*we use structures so that we can use stack as a data type*/
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack ));
    stack->top=-1;
    stack->capacity=capacity;
    stack->array=(int*)malloc(stack->capacity*sizeof(int));
    return stack;
};

int isFull(struct Stack *stack)
{
    return stack->top==stack->capacity-1;
}

int isEmpty(struct Stack *stack)
{
    return((stack->top==-1));
}

void push(struct Stack *stack,int num)
{
    if(isFull(stack))
    {
        printf("Error:Overflow");
        return;
    }
    stack->array[++stack->top]=num;
    printf("Item pushed to stack:%d",stack->array[stack->top]);
}

void pop(struct Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Error:No elements in the stack");
        return;
    }
    printf("The popped item is:%d",stack->array[stack->top--]);
}

void peek(struct Stack *stack)
{
    printf("The item on the top is:%d",stack->array[stack->top]);
}

int main()
{
    struct Stack *stack=createStack(100);
    push(stack,10);
    push(stack,20);
    push(stack,30);
    pop(stack);
    peek(stack);
}
