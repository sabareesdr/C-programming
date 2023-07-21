#include<stdio.h>
int main()
{
char str[100];
int i;
scanf("%[^\n]s",str);
int count=0;
for(i=0;str[i]!='\0';i++){
if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<= 122) || (str[i]>=48 && str[i]<=57)))
{
count++;
}
printf("%d",str);
return 0;
}
}

