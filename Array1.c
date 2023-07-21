#include<stdio.h>
int increase(int arr[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        if(arr[i]<arr[i+1])
            return 0;
    }
    return 1;
}
int decrease(int arr[],int num)
{
    int i;
    for(i=0;i<num;i++)
    {
        if(arr[i]>arr[i+1])
            return 0;
    }
    return 1;
}
int main()
{
  int arr[100],n; // n -size
   scanf("%d",&n);
   int i; //i-index
   for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
   if(increase(arr,n) || decrease(arr,n))
   {
      printf("Monotonic");
   }
   else
   {
       printf("Non Monotonic");
   }
    return 0;
}

#include<stdio.h>
int main() {
  double first, second, temp;
  printf("Enter first number: ");
  scanf("%lf", &first);
  printf("Enter second number: ");
  scanf("%lf", &second);

  // value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;

  // %.2lf displays number up to 2 decimal points
  printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}

