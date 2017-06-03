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
    select_sort(arr,5);
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

void select_sort(int* arr, int num)
{
    int i;
    int j,k;
    int key,temp;int min_ind;
    for(i=0;(i<5);i++)
    {
        min_ind=i;
        j=i+1;
        key=arr[i];
        while(j<num)
        {
            if(arr[j]<key)
            {
                min_ind=j;
                key=arr[j];
            }
            j++;
        }
        temp=arr[i];
        arr[i]=key;
        arr[min_ind]=temp;
    }
}
