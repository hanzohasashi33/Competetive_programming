#include <stdio.h>  
  
// Recursive function to return gcd of a and b  
int gcd(int a, int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
  
// Function to return LCM of two numbers  
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);  
}  



int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        int count = 0;
        int n,p,q,r;
        scanf("%d%d%d%d",&n,&p,&q,&r);
        for(int i = 1;i <= n;i++)
        {
            if(i%p == 0 && i%lcm(p,q)!=0 && i%lcm(p,r) && i%(lcm(lcm(p,q),r)))
            {
                count += 1;
            }
            else if(i%q == 0 && i%lcm(p,q)!=0 && i%lcm(q,r)!=0 && i%(lcm(lcm(p,q),r))!=0)
            {
                count += 1;
            }
            else if(i%r == 0 && i%lcm(r,q)!=0 && i%lcm(p,r)!=0 && i%(lcm(lcm(p,q),r))!=0)
            {
                count += 1;
            }
            else 
            {
                count += 0;
            }
        }
        printf("%d\n",count);
        test -= 1;
    }
    return 0;
}
