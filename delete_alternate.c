#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
}*head,*temp,*newnode,*pos;

void create();
void display();

int main()
{
    int choice;

    while(1)
        {
        printf("\n 1.create");
        printf("\n 2.display");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
    case 1:
         create();
        break;
    case 2:
        display();
        break;
        }

    }
    return 0;
}
void create()
{

int n,i;
printf("Enter Size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",& newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
}
}
void display()
{
temp=head;
while(temp!=NULL)
{
    if(temp->data%2!=0);
    {
    printf("%d ",temp->data);
    }
    temp=temp->next->next;
}
}
