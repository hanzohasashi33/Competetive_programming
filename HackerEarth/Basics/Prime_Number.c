// Write your code here
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n ;
    scanf("%d",&n);
    int count = 0;
    for(int i = 2;i < n;i++)
    {
        for(int j = 1;j < i;j++)
        {
            if(i % j == 0)
            {
                count ++ ;
            }
        }
        if(count == 1)
        {
            printf("%d ",i);
        }
        count = 0;
    }
    return 0;
}
