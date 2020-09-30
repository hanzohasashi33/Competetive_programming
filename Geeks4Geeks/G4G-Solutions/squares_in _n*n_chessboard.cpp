// https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard/0

#include <iostream>
using namespace std;


int number_of_squares(int n)
{
    return (n*(n+1)*(2*n+1))/6;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<number_of_squares(n)<<endl;
	}
	return 0;
}
