// https://practice.geeksforgeeks.org/problems/deficient-number/0/


#include<iostream>
#include<math.h>
using namespace std;

bool isDeficient(int n)
{
    int count=0;
    for(int i=1;i*i<=n;i++)
    {  
        if(n%i==0)
        {
            if(i*i==n)
            {
                count+=i;
            }
            else
            {
            count+=i;
            count+=(n/i);
            }
        }
    }
    return count<2*n;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<isDeficient(n)<<endl;
    }
    return 0;
}
