#include<stdio.h>
#include<stdlib.h>
int front=-1;
int rear=-1;
void insertion(int queue[])
{   int num;
    if(front==-1 && rear==-1)
    {   front++; 
        rear++;
        printf("Enter value:");
        scanf("%d",&num);
        queue[rear]=num;
    }
    else if(rear==9)
    {
        printf("Queue is full.");
    }
        else {
                  printf("Enter value:");
           scanf("%d",&num);
           rear++;
           queue[rear]=num;
        }
}
void deletion(int queue[])
{
   if(front==-1 && rear==-1){
    printf("Queue is empty.");
   }
   else if(front==rear)
   {
    printf("The number deleted is %d",queue[front]);
    front=-1;
    rear=-1;
   }
   else {
       printf("The number deleted is %d",queue[front]);
       front++;
   }
}
void traverse(int queue[])
{   int i;
    if(front==-1 && rear==-1){
    printf("Queue is empty.");
   }
   else {
    for(i=front;i<=rear;i++){
    printf("%d ",queue[i]); }
   }
}
int main()
{
    int queue[10],i,choice;
    printf("Enter a queue:");
    for(i=0;i<10;i++){
        scanf("%d",queue[i]);
    }
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