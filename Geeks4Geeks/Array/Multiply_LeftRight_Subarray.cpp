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
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	    }
	    int mid = n/2;
	    int suml = 0,sumr = 0;
	    for(int i = 0;i < n/2;i++)
	        suml += arr[i];
	    for(int i = n/2;i < n;i++)
	        sumr += arr[i];
	    cout << suml * sumr << endl;
	}
	return 0;
}
