#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
int i,l=0;
gets(str);
l=strlen(str);
for(i=0;i<l/2;i++)
{
ch=str[i];
str[i]=str[l-i-1];
str[l-i-1]=ch;
}
puts(str);
}


