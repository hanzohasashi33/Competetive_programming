//https://practice.geeksforgeeks.org/problems/balanced-array/0
int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	    }
	    int sumleft = 0,sumright = 0;
	    int mid = n/2;
	    for(int i = 0;i < mid;i++)
	        sumleft += arr[i];
	    for(int i = mid;i < n;i++)
	        sumright += arr[i];
	    cout << abs(sumleft - sumright) << endl;
	}
	return 0;
}
