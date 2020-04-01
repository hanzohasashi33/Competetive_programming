#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int test;
	cin >> test;
	while(test--)
	{
	    int n,x;
	    cin >> n >> x;
	    vector <int> heap;
	    for(int i = 0;i < n;i++)
	    {
	        int num;
	        cin >> num;
	        heap.push_back(num);
	    }
	    make_heap(heap.begin(),heap.end());
	    for(int i = 0;i < x;i++)
	    {
	        cout << heap.front() << " ";
	        pop_heap(heap.begin(),heap.end());
	        heap.pop_back();
	    }
	    cout << endl;
	}
	return 0;
}
