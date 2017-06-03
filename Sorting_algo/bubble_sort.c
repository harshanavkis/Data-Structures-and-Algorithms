#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[5],i,j;
    printf("Enter 5 numbers\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr,5);
    display(arr);
}


void display(int* arr)
    {
        int i=0;
        while(i<5)
        {
            printf("\t%d",arr[i]);
            i++;
        }

    }

void bubble_sort(int* arr, int num)
{
    int i,j,count;
    while(count!=0)
    {
        i=0;
        count=0;
        while(i<num-1)
        {
            if((arr[i]>arr[i+1]))
            {
                swap(&arr[i],&arr[i+1]);
                count++;
            }
        i++;
        }
        printf("\n hi\n");
    }
}

void swap(int* arr1,int* arr2)
{
    int temp;
    temp=*(arr1);
    *(arr1)=*(arr2);
    *(arr2)=temp;
}
