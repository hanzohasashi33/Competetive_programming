#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	int l,r,k;
	int count = 0;
	cin >> l >> r >> k;
	for(int i = l;i <= r;++i)
	{
		if(i%k == 0)
		{
			count += 1;
		}
	}
	cout << count << endl;
	return 0;
}
