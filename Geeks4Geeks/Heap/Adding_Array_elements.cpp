#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n,mini;
	    cin >> n >> mini;
	    priority_queue <int, vector<int>, greater<int> > pq;
	    for(int i = 0;i < n;i++)
	    {
	        int num;
	        cin >> num;
	        pq.push(num);
	    }
	    while(pq.top() < mini)
	    {
	        int a = pq.top();
	        pq.pop();
	        int b = pq.top();
	        pq.pop();
	        pq.push(a + b);
	    }
	    while(!pq.empty())
	    {
	        cout << pq.top() << " ";
	        pq.pop();
	    }
	    cout << endl;
	}
	return 0;
}
