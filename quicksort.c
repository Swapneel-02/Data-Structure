#include<stdio.h>
#include<stdlib.h>
int low,high;
int partition(int arr[],int low,int high)
{   int temp;
    int pivot=arr[low];
    int i=low+1;
    int j=high;
    do{
        while(arr[i]<=pivot) {
            i++;
        }
        while(arr[j]>pivot) {
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    } while(i<j);

    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
}
void quicksort(int arr[],int low,int high)
{
    int partitionindex;
    if(low<high) {
        partitionindex=partition(arr,low,high);
        quicksort(arr,low,partitionindex-1);
        quicksort(arr,partitionindex+1,high);
    }
}
int main()
{   int i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    low=0,high=n-1;
    int arr[n];
    printf("Enter array of size %d :",n);
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    quicksort(arr,low,high);
    for ( i =0; i<n; i++)
    {
       printf("%d ",arr[i]);
    }
    return 0;
}