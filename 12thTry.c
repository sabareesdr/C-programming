#include <stdio.h>
#include <stdlib.h>

int func(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int kthSmallest(int arr[], int N, int k)
{
    qsort(arr, N, sizeof(int), func);
    return arr[k - 1];
}
int main()
{
    int k;
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("K'th smallest element is %d",kthSmallest(arr, N, k));
    return 0;
}
