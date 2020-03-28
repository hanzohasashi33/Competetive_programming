#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    int x;
	    cin >> x;
	    int i,flag = 0;
	    for(i = 0;i < n;i++)
	    {
	        if(arr[i] == x)
	        {
	              flag = 1;
	              break;
	        }
	    }
	    if(flag == 0) cout << -1 << endl;
	    else 
	    {
	        cout << i << " ";
	        while(arr[i] == x)
	        {
	            i++;
	        }
	        cout << i-1 << endl;
	    }
	}
	return 0;
}
