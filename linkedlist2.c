#include<stdio.h>
#include<stdlib.h>
int count=0;
void createList();
void printList();
void insertfirst();
void insertAfter();
void insertEnd();
void delfirst();
void delEnd();
void delAfter();
struct node
{
  int data;
  struct node *next;

}*head=NULL,*newnode,*temp,*current=NULL,*prev=NULL;
int main()
{
    int choice;
    printf(" \n Enter the Choice : ");
    scanf("%d",&choice);
    while(1)
    {
        switch(choice)
        {
        case 1:
            {
                createList();
            }
        case 2:
            {
                printList();
            }
        case  3:
            {
                  insertfirst();
            }
        case 4:
            {
                insertEnd();
            }
        case 5:
            {
                insertAfter();
            }
        case 6:
            {
                insertEnd();
            }
        case 7:
            {
               delfirst();
            }
        case 8:
            {
               delEnd();
            }
        case 9:
            {
               delAfter();
            }
        }
    }

}
void createList()
{
    int i,size;
  printf("enter the no of nodes \n");
  scanf("%d",&size);
 printf("Enter the data :")
    for(i=0;i<size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        count++;
    }
}
void printList()
{
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }

}
void insertfirst()
{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the new Data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        head=newnode;
        newnode->next=temp;
        count++;
        printf("\n Node inserted successfully \n");
}
void insertLast()
{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the new Data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        count++;
        printf(" \n Node inserted successfully \n");
}
void insertAfter()
{
       int num;
        printf("\n enter the num after the element will be inserted :");
       scanf("%d",&num);
       newnode=(struct node*)malloc(sizeof(struct node));
       printf("\n Enter the new Data :");
         scanf("%d",&newnode->data);
        newnode->next=NULL;
        prev=head;
        while(prev->data!=num)
        {
            prev=prev->next;
        }

        newnode->next=prev->next;
        prev->next=newnode;
        count++;
        printf("\n Node inserted successfully \n");
}
void delfirst()
{
    if(head==NUll)
    {
        printf("\n There is no node to delete \n");
    }
    temp=head;
    head=head->next;
    count--;
}
void delEnd()
{
    if(head==NUll)
    {
        printf("\n There is no node to delete \n");
    }
  temp=head;
  while(temp->next!=NULL)
  {
      prev=temp;
      temp=temp->next;
  }
  if(prev->next!=NULL)
  {
      prev->next=NULL;
  }
  count--;
}
void delAfter()
{
     int element;
     printf("Enter the elemnet after delete");
     scanf("%d",&element);
    current=head;
    while(current->data!=element)
    {
        prev=current;
        current=current->next;
    }
    if(prev->next!=NULL)
    {
        prev->next=current->next;
    }
    count--;
    free(current);

}
