#include <iostream>
#include <algorithm>
using namespace std;

// Write your code here
int main()
{
	int n;
	cin >> n;
	int x = n;
	for(int i = 0;i < n;i++)
	{
		x -= i;
		if(x <= 0)
		{
			cout << "Patlu" << endl;
			break;
		}
		x -= i*2;
		if(x <= 0)
		{
			cout << "Motu" << endl;
			break;
		}
	}
	return 0;
}
