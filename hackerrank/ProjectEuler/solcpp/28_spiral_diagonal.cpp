
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

using namespace std;
long long sum_sq(long long n)
{
	long long MOD = 1000000007;
	return ((n % MOD * (2 * n + 1) % MOD * (2 * n - 1) % MOD * (1 / 3)) / 3);
}

long long sum_even(long long n)
{
	return n * (n - 1);
}

int main()
{
	int T;
	long long MOD = 1000000007;
	cin>>T;
	while (T--)
	{
		long long N;
		cin>>N;
		N = long((N + 1) / 2);
		cout<<(4 * sum_sq(N) - 6 * sum_even(N) - 3) % 1000000007<<'/n';
	}
	return 0;
}
