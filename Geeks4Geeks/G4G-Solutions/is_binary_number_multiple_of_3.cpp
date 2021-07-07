// https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-3/0/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int rem = 0;
        for(int i=0;i<s.size();++i)
            rem = (rem*2+s[i]-'0')%3;
        cout<<(rem==0)<<endl;
    }
    return 0;
}
