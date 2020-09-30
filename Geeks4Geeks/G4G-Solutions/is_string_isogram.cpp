// https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not/1


#include<bits/stdc++.h>
using namespace std;

bool isIsogram(string s);

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        
        cout<<isIsogram(s)<<endl;
        
    }
	return 0;
}// } Driver Code Ends
//Complete this function
bool isIsogram(string s)
{
    int arr[26]={0};
    int sl = s.length();
    for(int i=0;i<sl;i++)
    {
        arr[s[i]-'a']++;
        if(arr[s[i]-'a']>1)
        {
            return false;
        }
    }
    return true;
}
