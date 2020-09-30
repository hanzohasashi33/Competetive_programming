# https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1

def convertFive(n):
    l = str(n).replace('0','5')
    return l



#{ 
#  Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        print (convertFive(int(input().strip())))
# } Driver Code Ends
