#include<stdio.h>
#include<stdlib.h>
struct node
{

    int value;
    struct node *next;
}*head,*one=NULL,*two=NULL,*three=NULL;
void printlinkedlist(struct node *p)
{
    while(p!=NULL)
    {
printf("%d ",p->value);
        p=p->next;
    }
}
int main()
{
    int n;
    printf("input the number of nodes - ");
    scanf("%d",&n);

    one = malloc(sizeof(struct node));
    two=malloc(sizeof(struct node));
    three=malloc(sizeof(struct node));


    printf("Input data for node 1 : ");
   scanf("%d",&one->value);
     printf("Input data for node 2 : " );
     scanf("%d",&two->value);
      printf("Input data for node 3 : ");
      scanf("%d",&three->value);

      printf("data entered in the list:");
      printf("\n");
      printf("data= %d",one->value);
       printf("\ndata= %d",two->value);
        printf("\ndata= %d",three->value);



  // one->next=two;
 //  two->next=three;
 //   three->next=NULL;

  //  head=one;
  //  printlinkedlist(head);

}

