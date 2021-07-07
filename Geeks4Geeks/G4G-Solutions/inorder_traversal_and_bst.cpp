// https://practice.geeksforgeeks.org/problems/inorder-traversal-and-bst/0/?ref=self


#include <iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int v[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
        set<int> hashSet(v,v+n);

	    if(is_sorted(v, v + n)&&hashSet.size()==n)   cout<<"1"<<endl;
	    else    cout<<"0"<<endl;
	}
	return 0;
}
