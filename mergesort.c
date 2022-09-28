#include<stdio.h>
#include<stdlib.h>
void mergesort(int a[],int b[],int c[],int m,int n)
{
    int i,j,k;
    i=0,j=0,k=0;
    while(i<m && j<n) 
    {
        if(a[i]<b[j]) {
            c[k]=a[i];
            i++;
            k++;
        }
        else {
            c[k]=b[j];
            k++;
            j++; } 
    }
    while(i<m) {
        c[k]=a[i];
        i++; 
        k++;
    }
    while(j<n) {
        c[k]=b[j];
        j++; 
        k++;
    }
    
}
int main()
{
    int m,n,i,j,k,x;
    printf("Enter size of arrays:");
    scanf("%d %d",&m,&n);
    int a[m], b[n], c[m+n];
    printf("Enter element into first array:");
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Enter element into second array:");
    for ( j = 0; j < n; j++)
    {
        scanf("%d",&b[j]);
    }
    mergesort(a,b,c,m,n);
    printf("The array after sorting is:");
    for ( k = 0; k < m+n; k++)
    {
        printf("%d  ",c[k]);
    }
    return 0;
}