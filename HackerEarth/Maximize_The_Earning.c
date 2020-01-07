#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    scanf("%d",&s);
    while(s > 0)
    {
        int n,r;
        scanf("%d%d",&n,&r);
        int count = r;
        int build[n];
        int i = 0;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&build[i]);
        }
        i = 0;
        int j = 0;
        for(j = i + 1;j < n;j++)
        {
            if(build[j] > build[i])
            {
                i = j;
                count += r;
            }
        }
        printf("%d\n",count);
        s --;
    }
}
