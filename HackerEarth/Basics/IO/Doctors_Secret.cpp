#include <iostream>
using namespace std;

// Write your code here
int main()
{
	int l,n;
	cin >> l >> n;
	if(l <= 23 && n >= 500 && n <= 1000)
	{
		cout << "Take Medicine" << endl;
	}
	else 
	{
		cout << "Don't take Medicine" << endl;
	}
	return 0;
}
