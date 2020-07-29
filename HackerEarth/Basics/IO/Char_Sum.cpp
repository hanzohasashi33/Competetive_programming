#include <iostream>
#include <string>
using namespace std;

// Write your code here
int main()
{
	string s;
	cin >> s;
	int n = s.size();
	int sum = 0;
	for(int i = 0;i < n;++i)
	{
		sum += (s[i] - 'a' + 1);
	}
	cout << sum << endl;
	return 0;
}
