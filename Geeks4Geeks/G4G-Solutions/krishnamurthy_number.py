# https://practice.geeksforgeeks.org/problems/krishnamurthy-number1323/1/?page=1&query=page1
class Solution:
    def isKrishnamurthy(self, N):
        l=[1, 2, 145, 40585]
        if N in l:
            return "YES"
        else:
            return "NO"







#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.isKrishnamurthy(N))
# } Driver Code Ends
