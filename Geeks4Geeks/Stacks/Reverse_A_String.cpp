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
    // Your code goes here
    stack <char> s;
    for(int i = 0;i < len;i++)
    {
        s.push(str[i]);
    }
    int m = 0;
    while(!s.empty())
    {
        str[m] = s.top();
        s.pop();
        m++;
    }
}
