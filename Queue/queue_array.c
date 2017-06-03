#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int front,rear,size;
    unsigned capacity;
    int *array;
};

struct Queue* createQueue(unsigned capacity)
{
    struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity=capacity;
    queue->front=queue->size=0;
    queue->rear=capacity-1;
    queue->array=(int*)malloc(sizeof(int));
    return queue;
}

int isFull(struct Queue* queue)
{
    return(queue->size==queue->capacity);
}

int isEmpty(struct Queue* queue)
{
    return(queue->size==0);
}

void enqueue(struct Queue* queue,int num)
{
    if(isFull(queue))
    {
        printf("Error:Overflow!!\n");
        return;
    }
    queue->rear=(queue->rear+1)%(queue->capacity);
    queue->array[queue->rear]=num;
    queue->size=queue->size+1;
    printf("\nNumber enqueued:%d",num);
}

void dequeue(struct Queue* queue)
{
    if(isEmpty(queue))
    {
        printf("Error:No element remaining");
        return;
    }
    int num=queue->array[queue->front];
    queue->front=(queue->front+1)%(queue->capacity);
    queue->size=queue->size-1;
    printf("\nNumber dequeuedis:%d",num);
}

int front(struct Queue* queue)
{
    if(isEmpty(queue))
    {
        printf("Error:Queue empty!! No element to show");
        return;
    }
    printf("\nThe number in the front of the queue is%d",queue->array[queue->front]);
}

int rear(struct Queue* queue)
{
    if(isEmpty(queue))
    {
        printf("Error:Queue empty!! No element to show");
        return;
    }
    printf("\nThe element at the end of the queue is:%d",queue->array[queue->rear]);
}


int main()
{
    struct Queue* queue=createQueue(1000);
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    dequeue(queue);
    front(queue);
    rear(queue);
}
