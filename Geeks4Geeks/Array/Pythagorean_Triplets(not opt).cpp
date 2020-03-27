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
	    int flag = 0;
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    for(int i = 0;i < n;i++)
	    {
	        for(int j = i + 1;j < n;j++)
	        {
	            for(int k = j + 1;k < n;k++)
	            {
	                if(arr[i]*arr[i] == arr[j]*arr[j] + arr[k]*arr[k] ||arr[j]*arr[j] == arr[i]*arr[i] + arr[k]*arr[k] ||arr[k]*arr[k] == arr[j]*arr[j] + arr[i]*arr[i])
	                {
	                    cout << "Yes" << endl;
	                    flag = 1;
	                    break;
	                }
	            }
	        }
	    }
	    if(flag == 0) cout << "No" << endl;
	}
	return 0;
}
