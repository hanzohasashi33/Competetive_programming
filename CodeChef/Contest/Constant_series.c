#include <stdio.h>
#include <stdlib.h>


int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int flag = 0;
        int count = 0;
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int i = 0;
        for(i = 0;i < n;i+=0)
        {
            flag = 0;
            while(arr[i + 1] - arr[i] == 1)
            {
                i ++;
                flag = 1;            
                printf("%d\n",flag);

            }
            if(flag == 1)
            {
                count ++;
            }
            if(flag == 0)
            {
                i ++;
            }
        }
        printf("%d",count);
        test -= 1;
    }
    return 0;
}
