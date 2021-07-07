// https://practice.geeksforgeeks.org/problems/minimum-indexed-character/1/




// C++ implementation to find the character in first 
// string that is present at minimum index in second
// string
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
void printMinIndexChar(string str, string patt)
{
     int hashMap[26]={0};
     string res = "";
     for(int i=0;i<patt.length();i++)
     {
        hashMap[patt[i]-'a']++;
     }
     for(int j=0;j<str.length();j++)
     {
       if(hashMap[str[j]-'a']>0)
       {
           cout<<str[j];
           return;
       }
   }
    cout<<"No character present";
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    string patt;
	    cin>>str;
	    cin>>patt;
	    printMinIndexChar(str, patt);
	    cout<<endl;
	}return 0;
}
  // } Driver Code Ends
