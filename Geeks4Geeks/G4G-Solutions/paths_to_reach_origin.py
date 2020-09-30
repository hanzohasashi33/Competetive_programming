# https://practice.geeksforgeeks.org/problems/paths-to-reach-origin/0/


import math

def findPaths(m,n):
    return (math.factorial(m+n))/(math.factorial(m)*math.factorial(n))

t = int(input())
for i in range(t):
    s = str(input())
    l = s.split()
    m = int(l[0])
    n = int(l[1])
    x = findPaths(m,n)
    print(int(x))
