#include <iostream>
#include <algorithm>
using namespace std;

// Write your code here
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	while(n)
	{
		int r,x;
		cin >> r >> x;
		int tof = (100*x*7)/(2*22*r);
		if(tof > 0)
		{
			sum += 1;
		}
		n--;
	}
	cout << sum << endl;
	return 0;
}
