#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
}*newnode,*head,*temp;
int main()
{
        int n,i;

        printf("number of nodes:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Input data for node:" );
        scanf("%d",&newnode->data);

        newnode->next=NULL;
        if(head==NULL)

            {
                head=newnode;
                temp=newnode;
            }
            else
            {
            temp->next=newnode;
            temp=temp->next;
            }
            }
            temp=head;
            while(temp!=NULL)
                {
            printf("Data :%d\n",temp->data);
            temp=temp->next;
        }
    return 0;
}
