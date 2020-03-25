// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends
/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int i = 0,answer = n;
    while(n > 0)
    {
        int temp = n%10;
        if(temp == 0)
        {
            answer += 5 * pow(10,i);
        }
        i++;
        n = n/10;
    }
    return answer;
}
