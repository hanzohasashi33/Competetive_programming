# https://practice.geeksforgeeks.org/problems/rectangles-in-nn-board/0/

def rect(n):
    return ((n)*(n+1)*(3*n*n-n-2))/12
    
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(int(rect(n)))
