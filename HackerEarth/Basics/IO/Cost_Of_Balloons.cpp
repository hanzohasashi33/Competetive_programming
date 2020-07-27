// Sample code to perform I/O:
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// Write your code here
int main()
{
	int test;
	cin >> test;
	while(test > 0)
	{
		int green,purple;
		int prob1 = 0;
		int prob2 = 0;
		cin >> green >> purple ;
		int peeps;
		cin >> peeps;
		while(peeps)
		{
			int first,second;
			cin >> first >> second;
			prob1 += first * 1;
			prob2 += second * 1;
			peeps --;
		}
		cout << min(green,purple) * max(prob1,prob2) + max(green,purple) * min(prob1,prob2) << endl;
		test --;
	}
	return 0;
}
