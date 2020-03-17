/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;



bool isbalanced(string str)
{
    stack <char> s;
    for(int i = 0;i < str.length();i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
            continue;
        } 

        if(s.empty())
        {
            return false;
        }

        if(str[i] == ')')
        {
            char x = s.top();
            s.pop();
            if(x == '{' or x == '[')
            {
                return false;
            }
        }
        else if(str[i] == '}')
        {
            char x = s.top();
            s.pop();
            if(x == '(' || x == '[')
            {
                return false;
            }
        }
        else if(str[i] == ']')
        {
            char x = s.top();
            s.pop();
            if(x == '{' || x == '(')
            {
                return false;
            }
        }
    }
    return s.empty();
}




int main()
{
	int test;
	cin >> test;
	while(test--)
	{
    	string str;
    	cin >> str;
    	if(isbalanced(str) == 1)
		{
			cout << "YES" << endl;
		}
		else 
		{
			cout << "NO" << endl;
		}
	}
    return 0;
}
