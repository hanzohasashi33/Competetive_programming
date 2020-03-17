#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int query;
    cin >> query;
    stack <int> s;
    stack <int> maxstack;
    maxstack.push(0);
    while(query > 0)
    {
        int querynum;
        cin >> querynum;
        if(querynum == 1)
        {
            int x;
            cin >> x;
            s.push(x);
            if(s.top() >= maxstack.top())
            {
                maxstack.push(x);
            }
        }
        else if(querynum == 2)
        {
            int x = s.top();
            s.pop();
            if(x == maxstack.top())
            {
                maxstack.pop();
            }
        }
        else
        {
            cout << maxstack.top() << endl;
        }
        query --;
    } 
    return 0;
}
