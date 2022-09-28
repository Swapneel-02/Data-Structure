#include<stdio.h>
#include<stdlib.h>
void insertionsort(int arr[],int n)
{
  int key,i,j;
  for ( i = 1; i < n; i++)
  {
    key=arr[i];
     j=i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
  
}
int main()
{
    int n,x,a,i,temp;
    int arr[20];
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter an array of size %d:",n);
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    printf("Array after sorting is: ");
    for ( i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    
    return 0;
}