#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);


  temp = first;


  first = second;


  second = temp;

  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}


    char s,goal;
    scanf("%s",&s);
    for(i=0;i<=s;i++)
    {
        for(j=0;j<=s;j++)
        int arr[]=new int[i];
    }
    s=goal;
    goal=temp;
    int temp=s;
    if(i);
}


    #include<stdio.h>
    int main() {
    	int a[10],b[10],c[10],i;
    	printf("Enter First array->");
    	for (i=0;i<10;i++)
    	  scanf("%d",&a[i]);
    	printf("\nEnter Second array->");
    	for (i=0;i<10;i++)
    	            scanf("%d",&b[i]);
    	printf("Arrays before swapping");
    	printf("\nFirst array->");
    	for (i=0;i<10;i++) {
    		printf("%d",a[i]);
    	}
    	printf("\nSecond array->");
    	for (i=0;i<10;i++) {
    		printf("%d",b[i]);
    	}
    	for (i=0;i<10;i++) {
    		//write any swapping technique
    		c[i]=a[i];
    		a[i]=b[i];
    		b[i]=c[i];
    	}
    	printf("\nArrays after swapping");
    	printf("\nFirst array->");
    	for (i=0;i<10;i++) {
    		printf("%d",a[i]);
    	}
    	printf("\nSecond array->");
    	for (i=0;i<10;i++) {
    		printf("%d",b[i]);
    	}
    	return 0;
    }

    /* Swaps strings by swapping pointers */
void swap1(char **str1_ptr, char **str2_ptr)
{
char *temp = *str1_ptr;
*str1_ptr = *str2_ptr;
*str2_ptr = temp;
}

int main()
{
char *str1 = "geeks";
char *str2 = "forgeeks";
swap1(&str1, &str2);
printf("str1 is %s, str2 is %s", str1, str2);
getchar();
return 0;
}

#include<stdio.h>
int main()
{
    int i,j;
    char ch[90];
    scanf("%s",ch);
    char c[90];
    scanf("%s",c);
    int n=strlen(ch);
    int temp=0;
    for(i=0;i<n;i++)
    {
            if(ch[i]!=ch[i+1])
            {
                temp=ch[i+1];
                ch[i+1]=ch[i];
                ch[i]=temp;

            }
        }
    for(int i=0;i<n;i++)
    {
        if(ch[i]==c[i])
    {
        printf("true");
        break;
    }
    else
    {
        printf("false");
        break;
    }
}


    }
