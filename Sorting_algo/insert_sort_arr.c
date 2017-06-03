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
    insert_sort(arr,5);
    display(arr);
}

void insert_sort(int* arr,int n)
{
    int i,j,key;
    for(i=1;(i<n);i++)
    {
        key=arr[i];
        j=i-1;
        while((j>=0)&&(arr[j]>key))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
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
