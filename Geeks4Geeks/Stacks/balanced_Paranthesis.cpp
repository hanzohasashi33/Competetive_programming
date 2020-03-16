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
    string str;
    cin >> str;
    cout << isbalanced(str) << endl;
    return 0;
}
