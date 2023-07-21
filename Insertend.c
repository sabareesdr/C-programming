#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insertend();
void exit();


struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;

int main()
{
    int option;
    while(1)
    {
        printf("\n\nSingly Linked List:\n\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert At End\n");
        printf("4.Exit\n");
        printf("Enter your Choice:(1,2,3,4)\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insertend();
            break;

        case 4:
            exit(0);
            break;
        }
    }
}

void create()
{
    int n,i,val;
    printf("enter size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&val);
        newnode->data=val;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}

void display()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
}

void insertend()
{
    int val;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
