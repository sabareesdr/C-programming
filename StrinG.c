#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
gets(str);
int length=0;
length=strlen(str);
for(int i=0;i<length;i++)
{
   if(i==0 || i==(length-1))
   {
       str[i]=toupper(str[i]);
   }
   if(str[i]==' ')
   {
       str[i-1]=toupper(str[i-1]);
       str[i+1]=toupper(str[i+1]);

   }

}
puts(str);
return 0;
}
