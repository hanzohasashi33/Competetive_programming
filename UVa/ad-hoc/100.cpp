#include<bits/stdc++.h>
using namespace std;


#define int             long long


int getCycle(int n)
{
    int count = 1;
    while(n != 1)
    {
        count += 1;
        if(n%2 == 0)
        {
            n = n/2;
        }
        else 
        {
            n = 3*n + 1;
        }
    }
    return count;
}


int getMaxCycle(int a,int b)
{
    int maxCycles = 0;
    for(int i = a;i <= b;i++)
    {
        if(getCycle(i) > maxCycles)
        {
            maxCycles = getCycle(i);
        }
    }
    return maxCycles;
}



int32_t main()
{
    int x,y;
    while(scanf("%lld %lld", &x, &y) == 2)
    {
        cout << x << " " << y << " ";
        if(x > y)
        {
            cout << getMaxCycle(y,x) << endl;
        }
        else 
        {
            cout << getMaxCycle(x,y) << endl;
        }
    }
    return 0;
}
