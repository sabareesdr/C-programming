#include<stdio.h>
int main()
{
    long int factorial(int);
    int a,c;
    printf(" number is:");
    scanf("%d",&a);
    c=factorial(a);
    printf("\n the fact of %d!=%ld\n",a));
}
 long int factorial(int num)
{
if(num>1)
    return(num*factorial(num-1));
    else
        return(1);
}

