#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

/*In this program space complexity is O(n);If we want O(1) take two vsriables i(point to start) and j(point to end) and increment
i and decrement j and simultaneously swap the objects at their positions. Wheni=j stop*/

struct Stack
{
    int top;
    unsigned capacity;
    char *array;
};

int isFull(struct Stack *stack)
{
    return stack->top==stack->capacity-1;
}

int isEmpty(struct Stack *stack)
{
    return((stack->top==-1));
}

void push(struct Stack *stack,char num)
{
    if(isFull(stack))
    {
        printf("Error:Overflow");
        return;
    }
    stack->array[++stack->top]=num;
    printf("\nItem pushed to stack:%c",stack->array[stack->top]);
}

void pop(struct Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Error:No elements in the stack");
        return;
    }
    printf("%c",stack->array[stack->top--]);
}

void peek(struct Stack* stack)
{
    printf("\nThe element on th top is:%c",stack->array[stack->top]);
}

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack ));
    stack->top=-1;
    stack->capacity=capacity;
    stack->array=(char*)malloc(stack->capacity*sizeof(int));
    return stack;
};



int main()
{

    int count;
    char arr[MAXSIZE];
    printf("Input the word:");
    scanf("%s",arr);
    int i=0;
    while(arr[i] != '\0')
    {
        count++;
        i++;
    }
    struct Stack* stack=createStack(count);
    i=0;
    while(arr[i] != '\0')
    {
        push(stack,arr[i]);
        i++;
    }
    printf("The string in the reverse order is:");
    while(stack->top!=-1)
    {
        pop(stack);
    }

}
