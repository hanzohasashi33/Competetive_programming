// Write your code here
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    int max = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
        max += arr[i];
    }
    int q;
    scanf("%d",&q);
    while(q > 0)
    {
        int t;
        scanf("%d",&t);
        int sum = 0;
        if (t > max) 
        {
            printf("-1");
            printf("\n");
        }
        else 
        {
            for(i = 0;i < n;i++)
            {
                sum += arr[i];
                if(sum >= t)
                {
                    printf("%d\n",i+1);
                    break;
                }
            }
        }
        q --;
    }
    return 0;
}
