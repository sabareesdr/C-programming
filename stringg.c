#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t,i=0,j=0;
    scanf("%d",&t);
    char arr[100];
    for(j=0; j<t; j++)
    {
        int a=0,temp=0;
        scanf("%s",&arr);
        int open=0,close=0,star=0;
        for(i=0;i<strlen(arr);i++)
        {
            if(arr[i]==')' && i==0)
            {
                printf("No");
            }
            else if(arr[i]=='(')
            {
                open++;
            }
            else if(arr[i]==')')
            {
                close++;
            }
            else if(arr[i]=='*')
            {
                star++;
            }
            else 
            {
                break;
            }
        }
        if(a==1)
        {
            printf("No\n");
        }
        else 
        {
            if(open==close)
            {
                printf("Yes\n");
            }
            else if(abs(close-open)==star && arr[0]=='*')
            {
                printf("Yes\n");
            }
            else if(arr[strlen(arr)-1]=='*')
            {
                printf("No\n");
            }
            else if(open<<star)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");
        }
    }
}