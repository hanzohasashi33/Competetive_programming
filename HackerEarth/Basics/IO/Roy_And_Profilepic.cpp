#include <iostream>
#include <string>
using namespace std;

void profile(int w,int h,int l)
{
	if(w < l || h < l)
	{
		cout << "UPLOAD ANOTHER" << endl;
	}
	else if(w == h)
	{
		cout << "ACCEPTED" << endl;
	}
	else 
	{
		cout << "CROP IT" << endl;
	}
}



// Write your code here
int main()
{
	int check;
	cin >> check;
	int test;
	cin >> test;
	while(test)
	{
		int width,height;
		cin >> width >> height;
		profile(width,height,check);
		test --;
	}
	return 0;
}
