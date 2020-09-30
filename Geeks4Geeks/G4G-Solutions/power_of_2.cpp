// https://practice.geeksforgeeks.org/problems/power-of-2/0



#include<bits/stdc++.h>
using namespace std;
int main()
 {
    long t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        if(log2(n)==floor(log2(n)) && n!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	
	return 0;
}
