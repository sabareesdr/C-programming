#include<stdio.h>
#include<stdlib.h>

void create();
void insertBeg();
void insertEnd();
void display();

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*head,*temp,*newnode;

int main()
{
    int option;
    while(1)
    {
        printf("\n\nDoubly Linked List:\n\n");
        printf("1.Create\n");
        printf("2.insert Beg\n");
        printf("3.insert End\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter your Choice:(1,2,3,4,5)\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            insertBeg();
            break;
        case 3:
            insertEnd();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}

void create()
{
    if(head==NULL)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->prev=NULL;
        newnode->next=NULL;
        scanf("%d",newnode->data);
        head=newnode;
}
void insertBeg()
{

  newnode=(struct node*)malloc(sizeof(struct node));
  int dd
  scanf("%d" ,&dd);
  newnode->data=dd;
  newnode->prev=NULL;
  newnode->next=head;
  head->prev=newnode;
  head=newnode;
}
void insertEnd()
{
  temp=head;
  while(temp->next!=NULL)
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  newnode->prev=temp;
  temp->next=newnode;
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}


