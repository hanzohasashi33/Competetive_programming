//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++

/* inserts elements of the array into 
   stack and return the stack
*/
stack<int>_push(int arr[],int n)
{
   // your code here
   stack<int> s;
   s.push(arr[0]);
   for(int i = 1;i < n;i++)
   {
       if(s.top() < arr[i])
       {
           s.push(s.top());
       }
       else 
       {
           s.push(arr[i]);
       }
   }
   return s;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    // your code here
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends
