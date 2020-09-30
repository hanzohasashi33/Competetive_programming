// https://practice.geeksforgeeks.org/problems/minimum-indexed-character0221/1



// C++ implementation to find the character in first 
// string that is present at minimum index in second
// string
#include <bits/stdc++.h>
using namespace std;

string printMinIndexChar(string, string);

// Driver program to test above
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
	    cout << printMinIndexChar(str, patt) << endl;
	}
	return 0;
}// } Driver Code Ends

// function to find the minimum index character
// str: string given in the input
// patt: given pattern
string printMinIndexChar(string str, string patt)
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
           return res+str[j];
       }
   }
   return "$";
	
}

