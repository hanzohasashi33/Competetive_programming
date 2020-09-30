// https://practice.geeksforgeeks.org/problems/anagram-palindrome/0


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isAnagramPalindrome(string s){
    int len = s.length();
    map<char,int> mp;
    for(int i=0;i<len;i++)
        mp[s[i]]++;
    for(auto it=mp.begin();it!=mp.end();it++){
        it->second = it->second%2;
    }
    int sum=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        sum+=it->second;
    }
    if(sum<=1)
        return true;
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    getchar();
	    string s;
	    getline(cin,s);
	    cout<<(isAnagramPalindrome(s) ? "Yes" : "No")<<endl;
	}
	return 0;
}
