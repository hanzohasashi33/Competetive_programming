class Solution {
public:
    bool isValid(string str) {
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
};
