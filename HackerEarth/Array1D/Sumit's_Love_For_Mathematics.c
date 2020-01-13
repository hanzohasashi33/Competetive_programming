// Write your code here
#include <stdio.h>
#include <stdlib.h>

long long int gcd(long long int a,long long int b)  
{  
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
}  
  
// Function to return LCM of two numbers  
long long int lcm(long long int a,long long int b)  
{  
    return (a*b)/gcd(a, b);  
}  


int main()
{
    long long int test;
    scanf("%lld",&test);
    while(test > 0)
    {
        long long int n,a,b,c;
        scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
        long long int i = 0;
        long long int count = 0;
        /*
        for(i = 1;i <= n;i++)
        {
            if(i%a == 0 || i%b == 0 || i%c == 0)
            {
                count += 1;
            }
            else if(i%lcm(a,b) == 0 || i%lcm(c,b) == 0 || i%lcm(c,a) == 0)
            {
                count -= 1;
            }
            else if(i%lcm(lcm(a,b),c) == 0)
            {
                count += 1;
            }
        }*/
        long long int ca,cb,cc,cab,cbc,cca,cabc;
        ca = n/a;
        cb = n/b;
        cc = n/c;
        cab = n/lcm(a,b);
        cbc = n/lcm(b,c);
        cca = n/lcm(a,c);
        cabc = n/lcm(lcm(a,b),c);
        count = ca + cb + cc - cab - cbc - cca + cabc;
        printf("%lld\n",count);
        test -= 1;
    }
    return 0;
}
