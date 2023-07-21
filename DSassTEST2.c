#include <stdio.h>
#include <stdlib.h>


struct node
{
    int num;
    struct node *next;
}*stnode;

void createNodeList(int n);
int NodeCount();
void displayList();

int main()
{
    int n,totalNode;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");
    displayList();
    totalNode = NodeCount();
    printf("\n Total number of nodes = %d\n", totalNode);
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)
    {

        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode-> num = num;
        stnode-> next = NULL;
        tmp = stnode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;
                fnNode->next = NULL;
                tmp->next = fnNode;
                tmp = tmp->next;
            }
        }
    }
}

int NodeCount()
{
    int count = 0;
    struct node *tmp;
    tmp = stnode;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);
            tmp = tmp->next;
        }
    }
}
