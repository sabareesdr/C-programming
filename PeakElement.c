#include<stdio.h>
int main()
{
  int n,k=0;
  printf("SIZE:");
  scanf("%d",&n);
  int arr[n];
  int arr1[n];
  for(int i=0;i<n;i++)
  {
   printf("ARRAY ELEMENTS:");
   scanf("%d",&arr[i]);
  }
  for(int i=1;i<n-1;i++)
  {
       if((arr[i-1]<=arr[i])&&(arr[i]>arr[i+1]))
       {
           arr1[k]=arr[i];
           k++;
       }
  }
  for(int i=0;i<k;i++)
  {

      printf("%d",arr1[i]);
  }



}
