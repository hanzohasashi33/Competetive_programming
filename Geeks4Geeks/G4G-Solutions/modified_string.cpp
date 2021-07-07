// https://practice.geeksforgeeks.org/problems/the-modified-string/1/


#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends

int modified (string a){
    int n = a.length();
    if(n<3)
    {
        return 0;
    }
    int count = 0;
    int i=2;
    while(i<n)
    {
        if(a[i-2]==a[i-1]&&a[i-1]==a[i])
        {
            count++;
            i++;
        }
        i++;
    }
    return count;
}

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cout<<modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
