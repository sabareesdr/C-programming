#include<stdio.h>
int main() {
    int n;
    printf("enter the size");
    scanf("%d",&n);
   int arr[100];
   int temp;
   int arr1[100];

   for(int i=0;i<n;i++)
   {
   scanf("%d",& arr[i]);
   }
   for(int i =0;i<n;i++){
       arr1[i]=arr[i];
   }
 for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (arr1[i] > arr1[j])
                {
                    temp=  arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
   for(int i=0;i<n;i++)
   {
   printf("%d ",arr1[i]);
   }
    printf("\n");
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
       if(arr[i]==arr1[j]){
           printf("%d ",j+1);
       }
     }

  }


    return 0;
}
