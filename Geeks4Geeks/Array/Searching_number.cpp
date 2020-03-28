#include <iostream>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n,x;
	    cin >> n >> x;
	    int arr[n];
	    int flag = 0;
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    for(int i = 0;i < n;i++)
	    {
	        if(arr[i] == x)
	        {
	            flag = 1;
	            cout << i + 1 << endl;
	            break;
	        }
	    }
	    if(flag == 0) cout << -1 << endl;
	}
	return 0;
}
