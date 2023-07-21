#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {




        if(i>j && arr[i]<arr[j])


        {



               printf("%d,%d\n%d,%d\n",arr[i],arr[j],i,j);
           }


    }

}
}
