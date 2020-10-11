#!/usr/bin/python
import math
import ipdb
N,K=input().split()
N=int(N)
K=int(K)
def choose(n, k):
    if 0 <= k <= n:
        ntok = 1
        ktok = 1
        for t in range(1, min(k, n - k) + 1):
            ntok *= n
            ktok *= t
            n -= 1
        return ntok // ktok
    else:
        return 0
ans=0
#for n in range(N,1,-1):
#    r=int(n/2)
#    while(True):
#        if choose(n,r)>=K:
#            ans+=1
#        else:
#            break
#        if (r!=n-r):
#            ans+=1
#        r-=1
comb = [[0 for x in range(N+1)] for x in range(N+1)]
comb[0][0]=1
for i in range(1,N+1):
    try:
        comb[i][0]=1
    except IndexError:
        ipdb.set_trace()
    for j in range(1,i+1):
        comb[i][j]=comb[i-1][j-1]+comb[i-1][j]
        if comb[i][j]>K:
            ans+=1
print(ans)

