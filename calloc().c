#include<stdio.h>

#include<stdlib.h>
int main()
{

    int n,*ptr,*p,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    p=ptr;
    printf("enter %d elements\n",n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",ptr);
        sum=sum+*ptr;
        ptr++;
    }
    printf("the elements are:\n");
    for(int i=0;i<=n;i++)
    {

        printf("%d\t",*p);
        p++;
    }
    printf("\n addition: %d",sum);
}
