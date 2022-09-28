#include<stdio.h>
#include<stdlib.h>
void selectionsort(int arr[],int n)
{  
    int i,min,x;
   min=x;
   for ( x=0; x<n; x++)
   {
     for ( i = x+1; i < n; i++)
     {
        if(arr[i]<arr[min]) {
            min=i; }
     }
     swap(&arr[min],&arr[x]);
   }
}
void swap(int *min,int *x)
{
    int temp;
    temp=*min;
    *min=*x;
    *min=temp;
}
int main()
{
    int temp,x,n,i,min;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array of size %d :",n);
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    for ( i = 0; i < n; i++)
    {
       printf("%d",arr[i]);
    }
    return 0;
}