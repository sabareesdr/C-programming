#include<stdio.h>
int main()
{

    char s[50];
    scanf("%s",s);
    char goal[50];
    scanf("%s",goal);
    int n=strlen(s);
    int temp=0;
    int i,j;
    for(i=0;i<n;i++)
    {
            if(s[i]!=s[i+1])
            {
                temp=s[i+1];
                s[i+1]=s[i];
                s[i]=temp;
            }
        }
    for(int i=0;i<n;i++)
    {
        if(s[i]==goal[i])
    {
        printf("TRUE");
        break;
    }
    else
    {
        printf("FALSE");
        break;
    }
}


}
