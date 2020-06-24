#include <bits/stdc++.h> 
#define MAX 100001
using namespace std; 

 
void printString(long long int n) 
{ 
	char str[MAX]; 
	int i = 0; 

	while (n > 0) { 
		// Find remainder 
		int rem = n % 26; 

		// If remainder is 0, then a 'Z' must be there in output 
		if (rem == 0) { 
			str[i++] = 'z'; 
			n = (n / 26) - 1; 
		} 
		else // If remainder is non-zero 
		{ 
			str[i++] = (rem - 1) + 'a'; 
			n = n / 26; 
		} 
	} 
	str[i] = '\0'; 

	// Reverse the string and print result 
	reverse(str, str + strlen(str)); 
	cout << str << endl; 

	return; 
} 


int main() 
{ 
	long long int n;
	cin>>n;
	printString(n);
	return 0; 
} 
