#!/usr/bin/python3


m=int(input())
for k in range(m):
    n=int(input())
    sq=int((n*(n+1)*(2*n+1)/6))
    su=int(n*(n+1)/2)**2
    print(su-sq)
