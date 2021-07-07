// https://practice.geeksforgeeks.org/problems/love-for-the-twins/0


#include<iostream>
#include<map>
#include<cmath>
using namespace std;
int main()
{
int t;
cin >> t;
for(int i =0;i<t;i++){
    int n;
    cin>> n;
    int arr[n];
    map<int,int> m;
    for(int j=0;j<n;j++){
        cin>>arr[j];
        m[arr[j]]++;
        }
    int buy = 0;
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        if(it->second>=2) buy = buy + floor(it->second/2)*2;
    }

    cout << buy << endl;

    }
return 0;
}
