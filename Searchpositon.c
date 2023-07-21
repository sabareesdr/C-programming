#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100], ch;
  	int i, index;
  	index = -1;
    printf("Enter a string: ");
  	gets(str);

    printf("Search character: ");
  	scanf("%c", &ch);

  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)
		{
  			index = i;
 		}
	}
    if(index == -1)
  	{
  		printf("\n Not Found ");
	}
	else
	{
		printf("position:%d ",index);
	}
  	return 0;
}
