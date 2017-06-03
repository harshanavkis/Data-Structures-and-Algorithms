#include<stdio.h>
#include<stdlib.h>

void merge(int* left,int* right,int*arr,int n_arr)
{
    int i,j,k=0;
    int nl=n_arr/2;
    int nr=n_arr-nl;
    while((i<nl)&&(j<nr))
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<nl)
    {
        arr[k]=left[i];
        k++;
        i++;
    }
    while(j<nr)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}


void mergesort(int* arr,int na)
{
    if(na<2)
        return;
    int mid=na/2;
    int nl=mid;
    int nr=na-mid;
    int left[nl];
    int right[nr];
    int i;
    for(i=0;i<nl;i++)
    {
        left[i]=arr[i];
    }
    for(i=nl;i<na;i++)
    {
        right[i-mid]=arr[i];
    }
   mergesort(left,nl);
   mergesort(right,nr);
    merge(left,right,arr,na);
}


int main()
{
    int arr[]={12,11,13,5,6};
    int na=5;
    mergesort(arr,na);
    int i;
    for(i=0;i<na;i++)
    {
        printf("%d\t",arr[i]);
    }
}
