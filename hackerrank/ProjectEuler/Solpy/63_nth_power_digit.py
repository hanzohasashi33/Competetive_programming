#!/usr/bin/python
#import ipdb
import math

#num=int(input())
N=int(input())

for i in range(1,10):
    if (len(str(i**N))==N):
        print(i**N)

#for i in range(10**(N-1),10**N):
#    r=10**((1/N)*math.log10(i))
#    if math.ceil(r)**N==i or math.floor(r)**N==i:
#        print(i)
###ipdb.set_trace()
