#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int num)
{
	if(num == 0) return 1;
	return num * factorial(num-1);
}


// Write your code here
int main()
{
	int num;
	cin >> num;
	cout << factorial(num) << endl;
	return 0;
}
