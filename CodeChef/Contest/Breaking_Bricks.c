#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int s,w1,w2,w3;
        int count = 0;
        scanf("%d%d%d%d",&s,&w1,&w2,&w3);
        if(w1 + w2 + w3 <= s)
        {
            count += 1;
        }
        else if(w1 + w2 <= s && w3 > s - (w1 + w2))
        {
            count += 2;
        }
        else if(w1 <= s && w3 + w2 > s - w1)
        {
            count += 1;
            if(w2 + w3 > s)
            {
                count += 2;
            }
            else 
            {
                count += 1;
            }
        }
        printf("%d\n",count);
        test --;
    }
    return 0;
}
