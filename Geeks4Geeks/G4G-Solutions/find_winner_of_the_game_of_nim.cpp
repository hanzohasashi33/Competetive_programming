// https://practice.geeksforgeeks.org/problems/find-winner-of-the-game-of-nim/0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==1)
        {
            cout<<"Player A"<<"\n";
        }
        else
        {
            cout<<"Player B"<<"\n";
        }
    }
    return 0;
}
