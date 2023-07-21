
#include<stdio.h>
void plustwo(int *a)
{

    *a=*a+2;
    printf("in func the value of a is %d\n",*a);
}
int main()
{

    int n;
    int *ptr=&n;
    scanf("%d",&n);
    printf("before %d\n",n);
    plustwo(ptr);
    printf("after %d",n);
}
