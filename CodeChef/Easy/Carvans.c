// Write your code here
#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int i = 0;
        int count = 0;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i = 0;i < n;i++)
        {
            int j = i + 1;
            int max = 0;
            while(j < n - i - 1)
            {
                if(arr[i] < arr[i + j])
                {
                    break;
                }
                j ++;
                max ++;
            }
            if(max > count)
            {
                count = max;
            }
        }
        printf("%d\n",count + 1);
        test --;
    }
    return 0;
}*/






int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int count = 1;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int max = arr[0];
        for(int i = 1;i < n;i++)
        {
            if(max > arr[i])
            {
                max = arr[i];
                count ++;
            }
        }
        printf("%d\n",count);
        test --;
    }
    return 0;
}
