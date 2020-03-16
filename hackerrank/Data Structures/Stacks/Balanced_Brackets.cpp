#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string str) 
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
            return "NO";
        }

        if(str[i] == ')')
        {
            char x = s.top();
            s.pop();
            if(x == '{' or x == '[')
            {
                return "NO";
            }
        }
        else if(str[i] == '}')
        {
            char x = s.top();
            s.pop();
            if(x == '(' || x == '[')
            {
                return "NO";
            }
        }
        else if(str[i] == ']')
        {
            char x = s.top();
            s.pop();
            if(x == '{' || x == '(')
            {
                return "NO";
            }
        }
    }
    if(s.empty())
    {
        return "YES";
    }
    else 
    {
        return "NO";
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
