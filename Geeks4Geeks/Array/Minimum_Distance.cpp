// { Driver Code Starts
#include <stdio.h>
#include <iostream>
#include <stdlib.h> // for abs()
#include <limits.h> // for INT_MAX
using namespace std;
long long minDist(long long arr[], long long n, long long x, long long y);
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++) cin >> a[i];
        long long x, y;
        cin >> x >> y;
        cout << minDist(a, n, x, y) << endl;
    }
    return 0;
}// } Driver Code Ends
/*Complete the function below*/
long long minDist(long long arr[], long long n, long long x, long long y) {
    // add code here.
      int minDistance = n, ptrX = 2*n, ptrY = 2*n;
  for(int i = 0; i < n; i++) {
    if(arr[i] == x) {
	ptrX = i;
	minDistance = min(minDistance, abs(ptrX-ptrY));
    } else if(arr[i] == y) {
	ptrY = i;
	minDistance = min(minDistance, abs(ptrY-ptrX));
    }
  }
  return minDistance == n ? -1 : minDistance;
}
