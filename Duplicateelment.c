#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j])
                printf("%d ", arr[j]);
        }
    }
    return 0;
}
