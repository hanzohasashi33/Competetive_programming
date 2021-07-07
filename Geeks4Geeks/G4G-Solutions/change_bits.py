# https://practice.geeksforgeeks.org/problems/change-bits/0/
import math

t = int(input())
for _ in range(t):
    n = int(input())
    s = bin(n).replace("0b","")
    t = s.replace("0","1")
    x = int(t,2)
    print(str(x-n)+" "+str(x))
    
