#include<stdio.h>
void Square(int * a)
{

    *a=*a+2;
    printf("sum:%d\n",*a);
}
int main()
{
int n;
int *sc=&n;
    scanf("%d",&n);
    printf("%d\n",n);
    Square(sc);
        printf(" declare:%d",n);
}
