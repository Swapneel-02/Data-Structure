#include<stdio.h>
#include<stdlib.h>
void bubblesort(int arr[],int n)
{
   int x,i,temp;
   for ( x = 0; x < n-1; x++)
   {
      for ( i = 0; i < n-x-1; i++)
      {
         if(arr[i]>arr[i+1]) {
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;
        }  
      }
   }
}
int main()
{
    int n,i;
    printf("Input the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter an array of size %d :",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printf("Array after sorting is :");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}