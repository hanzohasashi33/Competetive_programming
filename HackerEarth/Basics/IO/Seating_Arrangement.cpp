#include <iostream>
using namespace std;

void seatnum(int s)
{
	int rem = s%12;
	if(rem == 1)
	{
		cout << s + 11 << " WS" << endl;
	}
	else if(rem == 2)
	{
		cout << s + 9 << " MS" << endl;
	}
	else if(rem == 3)
	{
		cout << s + 7 << " AS" << endl;
	}
	else if(rem == 4)
	{
		cout << s + 5 << " AS" << endl;
	}
	else if(rem == 5)
	{
		cout << s + 3 << " MS" << endl;
	}
	else if(rem == 6)
	{
		cout << s + 1 << " WS" << endl;
	}
	else if(rem == 7)
	{
		cout << s - 1 << " WS" << endl;
	}
	else if(rem == 8)
	{
		cout << s - 3 << " MS" << endl;
	}
	else if(rem == 9)
	{
		cout << s - 5 << " AS" << endl;
	}
	else if(rem == 10)
	{
		cout << s - 7 << " AS" << endl;
	}
	else if(rem == 11)
	{
		cout << s - 9 << " MS" << endl;
	}
	else if(rem == 0)
	{
		cout << s - 11 << " WS" << endl;
	}
}





// Write your code here

int main()
{
	int n;
	cin >> n;
	while(n > 0)
	{
		int seat;
		cin >> seat;
		seatnum(seat);
		n--;
	}
}
