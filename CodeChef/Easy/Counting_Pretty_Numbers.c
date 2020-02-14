#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        int i = 0;
        int count = 0;
        for(i = l;i <= r;i++)
        {
            if(i%10 == 2 || i%10 == 3 || i%10 == 9)
            {
                count ++;
            }
        }
        printf("%d\n",count);
        test --;
    }
    return 0;
}
