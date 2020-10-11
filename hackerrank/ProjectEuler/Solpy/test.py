#!/usr/bin/python3
import ipdb
import time


def isPrime(x):
    x=int(x)
    for i in range(2,int(x**.5)+1):
        if x%i ==0 :
            return False
    return True

n=1000000
ar=[]
nset=set()
st=time.clock()
for i in range(n):
    if isPrime(i):
        ar.append(i)
print(time.clock()-st)
st=time.clock()
for i in range(n):
    if isPrime(i):
        nset.add(i)
print(time.clock()-st)

ipdb.set_trace()
st=time.clock()
for i in range(1000):
    t=len(nset)+10 in ar
print(time.clock()-st)
st=time.clock()
for i in range(1000):
    t=len(nset)+10 in nset
print(time.clock()-st)
ipdb.set_trace()
