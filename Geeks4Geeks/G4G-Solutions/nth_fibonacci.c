// https://practice.geeksforgeeks.org/problems/the-nth-fibonnaci/0

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)    {printf("0\n");
        continue;
        }
        long long int prev, current;
        int i=0;
        prev=1;
        current=1;
        long long int x;
        while(i<n-2)
        {
            x = current;
            current=(current+prev)%10;
            prev=x;
            i++;
        }
        printf("%d\n",current%10);

    }
    return 0;
}
