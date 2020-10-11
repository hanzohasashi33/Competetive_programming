#!/usr/bin/python
import ipdb
import math
t=1
#t=int(input())
MOD=10**12
def prod(a,b,c,d):
    ipdb.set_trace()
    ans=a
    for i in range(c):
        ans=((ans%MOD)*(b%MOD))%MOD
    return (ans+d)%MOD

# A^B mod C = ( (A mod C)^B ) mod C
for i in range(t):
    #a,b,c,d=input().split()
    a,b,c,d='99999999 9999999 9999999 9999999'.split()
    a=int(a)
    b=int(b)
    c=int(c)
    d=int(d)
    prod(a,b,c,d)
    ipdb.set_trace()
    ans=(math.log10(a)+(c*math.log10(b)))
    print("%012d"%((round(10**(math.log10(a)+(c*math.log10(b))))%MOD+d)%MOD))


ipdb.set_trace()
