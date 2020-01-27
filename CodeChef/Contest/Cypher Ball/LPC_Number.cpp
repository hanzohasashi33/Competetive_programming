#include <iostream>
#include<bits/stdc++.h> 
using namespace std; 
  
int countNumber(int n) 
{ 
    int result = 0;  
    for (int i = 1; i <= 9; i++) 
    { 
        stack<int> s; 
        if (i <= n) 
        { 
            s.push(i); 
            result++; 
        }  
        while (!s.empty()) 
        { 
            int tp = s.top(); 
            s.pop(); 
            for (int j = tp%10; j <= 9; j++) 
            { 
                int x = tp*10 + j; 
                if (x <= n) 
                { 
                    s.push(x); 
                    result++; 
                } 
            } 
        } 
    } 
  
    return result; 
} 
  
int main() 
{ 
    int n;
    scanf("%d",&n);
    cout << countNumber(n) << endl; 
    return 0; 
} 
