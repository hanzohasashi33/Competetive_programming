// https://practice.geeksforgeeks.org/problems/find-optimum-operation/0/

#include <stdio.h>
int operations(int n)
{
    int count = 0;
    while(n!=0)
    {
        if(n%2==0||n==1)
        {
            count++;
        }
        else
        {
            count+=2;
        }
        n/=2;
    }
    return count;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",operations(n));
    }
    return 0;
}
