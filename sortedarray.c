#include<stdio.h>
int main()
{
    int i,x,n,sum,j;
    printf("Enter X value:");
    scanf("%d",&x);
    printf("Enter the array size:");
    scanf("%d",&n);
    int a[n],flag=0;
    printf("Enter Array Elements:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            sum=a[i]+a[j];
            if(sum==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
