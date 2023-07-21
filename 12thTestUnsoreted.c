#include<stdio.h>
int main()
{
    int k,n,i,j;
scanf("%d",&n);
    int a[n],temp;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("k = ");
    scanf("%d",&k);
    printf("%d ",a[k]);
    return 0;
}
