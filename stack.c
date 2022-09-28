#include<stdio.h>
#include<stdlib.h>
int top=5;
void push(int n,int stack[])
{
   int x;
   if(top==n-1)
   printf("Stack is full.");
   else { printf("Enter the value:");
             scanf("%d",&x);
             top++;
             stack[top]=x;
             }
}
void pop(int stack[])
{
   if(top==-1)
   printf("Stack is empty.");
   else {  printf("The value popped is %d.\n", stack[top]);
    top--; }
}
void display(int stack[])
{
   for (int i = 0; i <= top ; i++)
   {
      printf("%d ",stack[i]);
   } printf("\n");
}
int main()
{
     int choice;
    int stack[10]={1,3,5,7,9,0};
    do{
        printf("Press\n1.To push \n2.To pop\n3.Display\n4.EXIT\n");
        scanf("%d",&choice);
       switch(choice) {
        case 1:  push(10,stack); break;
        case 2:  pop(stack);break;
        case 3:  display(stack);break;
        case 4: printf("EXIT!!"); break;
        default: printf("Invalid choice");
     }
    } while(choice!=4);
    return 0;
}
