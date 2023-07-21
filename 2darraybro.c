#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int count=1;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
             arr[i][j]=count;
             count++;
            }
        }

     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        int row,col;
        scanf("%d %d",&row,&col);
        row=row-1;
        col=col-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==row && j<col)
                {
                    printf("%d ",arr[i][j]);
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==col && i<row)
                {
                    printf("%d ",arr[i][j]);
                }

            }
        }


}
