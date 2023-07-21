
#include<stdio.h>
int main()
{
     char s[],goal[],temp[];
        printf("Enter First array:");
    	for (int i=0;i<10;i++)
    	  scanf("%d",&s[i]);
    	printf("\nEnter Second array:");
    	for (int i=0;i<10;i++)
    	            scanf("%d",&b[i]);
  temp=s;
  s=goal;
  goal=temp;

    printf("\nAfter swapping, first number = %s\n",s);
  printf("After swapping, second number = %s", goal);
  return 0;
}

