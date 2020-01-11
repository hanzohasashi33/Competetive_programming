#!/bin/python

import sys

n,k,q = input().strip().split(' ')
n,k,q = [int(n),int(k),int(q)]
a = list(map(int,input().strip().split(' ')))
a = a[n-(k%n):]+a[:n-(k%n)]
for a0 in range(q):
    m = int(input().strip())
    print (a[m])
