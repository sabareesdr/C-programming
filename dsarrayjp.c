#include<stdio.h>
int main()
{
    int arr[100];
    int n,pos,x;
    scanf("%d",&n);
    printf("before insertion: ");
    for(int i=0;i<n;i++)
    {



//printf("before insersion: ");
        scanf("%d",&arr[i]);

    }

    printf("value to be added: ");
    scanf("%d",&x);
    pos=4;
    n++;
    for(int i=n-1;i>=pos;i--)
{


        arr[i]=arr[i-1];
        arr[pos -1]=x;
}
    printf("after insersion:\n ");
    for(int i=0;i<n;i++)
{


        printf(" %d",arr[i]);
        printf("\n");

}

}
