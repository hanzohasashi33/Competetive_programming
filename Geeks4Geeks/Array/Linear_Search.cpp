#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n,x;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    cin >> x;
	    int flag = 0;
	    for(int i = 0;i < n;i++)
	    {
	        if(arr[i] == x)
	        {
	            cout << i << endl;
	            flag = 1;
	            break;
	        }
	    }
	    if(flag == 0) cout << -1 << endl;
	}
	return 0;
}
