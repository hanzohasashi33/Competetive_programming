#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int n,d;
        scanf("%d%d",&n,&d);
        int arr[n];
        int i = 0;
        int count = 0;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&arr[i]);
            if((arr[i] + d)%7 == 0)
            {
                count += 1;
            }
        }
        printf("%d\n",count);
        test --;
    }
    return 0;
}
