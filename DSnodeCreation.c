#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node *next;

}*newnode,*head=NULL,*temp;
int main()
{


    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode-> data);
        newnode->next=NULL;
        if(head==NULL)
        {
          head=newnode;
          temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
    }
      temp=head;
      while(temp!=NULL)
      {

          printf(" %d",temp->data);
          temp=temp->next;
      }
}
