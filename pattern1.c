#include<stdio.h>
int main()
{
int n;
printf("Enter value:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
printf("%d",j);
}
for(int j=i*2;j<n*2;j++)
{
    printf(" ");
}
for(int j=i;j>=i;j--)
{
    printf("%d",j);
}

printf("\n");
}

}


