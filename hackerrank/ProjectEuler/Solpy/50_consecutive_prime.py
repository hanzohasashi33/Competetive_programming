#!/usr/bin/python3
import ipdb
import helper

def get_primes(n):
    num=set()
    prime=set()
    for i in range(2,n+1):
        num.add(i)
    l=len(num)
    while(l>0):
        p=num.pop()
        prime.add(p)
        i=2
        while(i*p<=n+1):
            if i*p in num:
                num.remove(i*p)
            i+=1
        l=len(num)
    return prime

#n=int(input())
n,testdata=helper.readData("input")

prime=get_primes(10**3)
ipdb.set_trace()
for i in range(n):
    N=int(testdata[i])
    #xx=int(input())
ipdb.set_trace()

