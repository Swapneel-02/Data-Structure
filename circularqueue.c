#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
void insertion(int queue[])
{   int num;
    if(front==rear && rear==-1)
    {   front=0; 
        rear=0;
        printf("Enter value:");
        scanf("%d",&num);
        queue[rear]=num;
    }
    else if((rear==9 && front==0) || (front-1==rear))
    {
        printf("Queue is full.");
    }
        else if(rear==9 && front!=0) 
        {     rear=0;
                  printf("Enter value:");
           scanf("%d",&num);
           rear++;
           queue[rear]=num;
        }
         else {
            rear=rear+1;
             printf("Enter value:");
           scanf("%d",&num);
            queue[rear]=num;
         }
}
void deletion(int queue[])
{
   if(front==rear && rear==-1){
    printf("Queue is empty.");
   }
   else if(front==rear)
   {
    printf("The number deleted is %d",queue[front]);
    front=-1;
    rear=-1;
   }
   else if(front==9)  {
       printf("The number deleted is %d",queue[front]);
       front=0;
       }
       else {
        printf("The number deleted is %d",queue[front--]);
       }
}
void traverse(int queue[])
{   int i,j;
    if(front==-1 && rear==-1){
    printf("Queue is empty.");
   }
   else if(front<=rear) {
    while(front<=rear)  {
    printf("%d ",queue[front++]); }
   }
       else {
        while(front<10) {
        printf("%d",queue[front++]);
        j=0; }
        while(j<=rear) {
           printf("%d",queue[j++]);
        }
       } printf("\n");
}
int main()
{
    int queue[10],i,choice;
    /* printf("Enter a queue:");
    for(i=0;i<10;i++){
        scanf("%d",&queue[i]);
    } */
    do{
        printf("Press  1.For insertion\n 2. For deletion\n 3.Display\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: insertion(queue); break;
            case 2: deletion(queue); break;
            case 3: traverse(queue); break;
            case 4: printf("EXIT!!"); break;
            default: printf("Inavlid choice.");
        }
     } while(choice!=4);
    return 0;
}