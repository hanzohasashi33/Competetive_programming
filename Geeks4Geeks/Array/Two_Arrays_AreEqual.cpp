#include <iostream>
using namespace std;

int main() 
{
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    unsigned long long int arr1[n],arr2[n],sum1 = 0,sum2 = 0,res = 0,i;
	    for(i = 0;i < n;i++)
	    {
	        cin >> arr1[i];
	        sum1 += arr1[i];
	        res ^= arr1[i];
	    }
	    for(i = 0;i < n;i++)
	    {
	        cin >> arr2[i];
	        sum2 += arr2[i];
	        res^= arr2[i];
	    }
	    if(res == 0 && sum1==sum2) cout << "1" << endl;
	    else cout << "0" << endl;
	}
	return 0;
}
