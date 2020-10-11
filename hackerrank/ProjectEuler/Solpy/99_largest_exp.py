#!/usr/bin/python

import math
ans={}
n=input()
n=int(n)
for i in range(n):
    line=input()
    b,e=line.split()
    b=int(b)
    e=int(e)
    val=e*math.log10(b)
    ans[val]=line
i=input()
i=int(i)
print(ans[sorted(ans)[i-1]])



#ipdb.set_trace()
