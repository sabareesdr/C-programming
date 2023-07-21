#include<stdio.h>
#include<string.h>
struct charecterfrequency
{
    char name[50];
    int frequency;
}s1;
int main()
{

scanf("%s",&s1.name);
scanf("%d",&s1.frequency);
printf("%s",s1.name);
printf("\n%d",s1.frequency);

}
