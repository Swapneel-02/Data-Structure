#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printlist(struct node *head)
{  
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr=head;
    while (ptr!= NULL)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    } printf("\n");
}
void insertbeg(struct node *head)
{   
    struct node *ptr;
     ptr = (struct node *)malloc(sizeof(struct node));
     ptr->next=head;
     ptr->data=10;
     head=ptr;
}
void insertmid(struct node *head,int index)
{   int i=0;
    struct node *temp=head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    while(i!=index-1) {
        temp=temp->next;
        i++;
    }
    ptr->next=temp->next;
    ptr->data=34;
    temp->next=ptr;
}
void insertend(struct node *head)
{
    struct node *temp=head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    while(temp->next!=NULL){
        temp=temp->next;
    }
    ptr=temp;
    ptr->next=NULL;
    ptr->data=55;
    temp->next=ptr;
}
void delbeg(struct node *head)
{   
    struct node *temp=head;
    head=head->next;
    free(temp);
}
void delmid(struct node *head,int index)
{
    struct node *temp=head;
    int i=0;
    while(i!=index-1)
    {
        temp=temp->next;
        i++;
    }
    free(temp);
}
void delend(struct node *head)
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    free(temp);
}
int main()
{ 
    int choice,index;
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;
    first->data = 20;
    second->data = 30;
    third->data = 40;
    do {
        printf("Press 1.For insertion at beginning.\n2.For insertion in between.\n3.For insertion at end.\n4.For deletion at beginning.\n5.For deletion in between.\n6.For deletion at end.\n7.Display.\n8.Exit.\n Enter the operation you want to perform in the linked list:");
        scanf("%d",&choice);
        switch(choice) {
        case 1: insertbeg(head); 
                break;
        case 2: printf("Enter index for insertion:"); 
                scanf("%d",&index); 
                insertmid(head,index); 
                break;
        case 3: insertend(head); 
                break;
        case 4: delbeg(head); 
                break;
        case 5: printf("Enter index for deletion:"); 
                scanf("%d",&index); 
                delmid(head,index); 
                break;
        case 6: delend(head); 
                break;
        case 7: printlist(head); 
                break;
        case 8: printf("EXIT!!"); 
                break;
        default: printf("Invalid input\n");
       }    
    } while(choice!=8);
    

    return 0;
}