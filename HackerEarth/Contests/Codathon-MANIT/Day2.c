// Write your code here
#include <stdio.h>
#include <stdlib.h>

int myxor(int x,int y)
{
    return (x|y) & (~x|~y);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int q;
    scanf("%d",&q);
    while(q > 0)
    {
        int bit;
        scanf("%d",&bit);
        if (bit == 1)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            for(i = a - 1;i <= b - 1;i++)
            {
                for(j = 0;j < n;j++)
                {
                    arr[i][j] = myxor(arr[i][j],c);
                }
            }
        }
        else 
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            for(i = 0;i <n;i++)
            {
                for(j = a - 1;j <= b - 1;j++)
                {
                    arr[i][j] = myxor(arr[i][j],c);
                }
            }
        }
        q --;
    }
    int sum = 0;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    /*
    for(i = 0;i < n;i++)
    {
        for(j = 0;j  < n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }*/
    printf("%d\n",sum);
    return 0;
}
