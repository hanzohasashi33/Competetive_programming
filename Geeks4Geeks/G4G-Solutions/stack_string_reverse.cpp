// https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

#include<bits/stdc++.h>
using namespace std;
void reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        reverse(str,len);
        cout<<str;
        cout<<endl;
    }
        return 0;
}
// } Driver Code Ends

void reverse(char *str, int len)
{
stack <char> s;
char *current=str;
while(*current)
{
s.push(*current);
current++;
}
current=str;
while(!s.empty())
{
*current=s.top();
current++;
s.pop();
}
}
