// https://practice.geeksforgeeks.org/problems/unique-bsts/0



#include <iostream>
using namespace std;

unsigned long int binomial(unsigned int n, unsigned int k) 
{ 
    unsigned long int res = 1; 
  
    if (k > n - k) 
        k = n - k; 
  
 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
  
    return res; 
} 
  


unsigned long int catalan(unsigned int n) 
{ 
    unsigned long int c = binomial(2*n, n); 
  
    return c/(n+1); 
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int n;
        cin>>n;
        cout<<catalan(n)<<endl;
    }
    return 0;
}
