#include <iostream>
using namespace std;

// Write your code here
int main()
{
	int test;
	cin >> test;
	while(test)
	{
		int n;
		cin >> n;
		int count = 0;
		for(int i = 1; i<n+1 ;i++)
		{
			for(int j = i+1; j<n+1 ;j++)
			{
				//cout << i << " " << j << " " << (i^j) << endl;
				if((i^j) <= n)
				{
					count += 1;
				}
			}
		}
		cout << count << endl;
		test --;
	}
	return 0;
}
