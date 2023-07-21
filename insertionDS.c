#include <stdio.h>

int main()
{
    int arr[100];
    int n,pos,item;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
  //  {
        scanf("%d",&arr[i]);
    //}
    printf("enter the item: ");
    scanf("%d",&item);
    printf("enter the pos: ");
    scsnf("%d",&pos);
    n++;
    for(int i=n-1;i>=pos;i--)
   // {
        arr[i]=arr[i-1];
        arr[pos-1]=item;
        printf("after: ");
        for(int i=0;i<n;i++)
       /// {
            printf("%d",arr[i]);
            printf("\n");
       // }
   // }

}
