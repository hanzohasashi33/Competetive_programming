#!/usr/bin/python3
#import ipdb
#import helper


def nextPalandrom(x):
    x_int=int(x)
    x_new=x_int-1
    while(True):
        if str(x_new)[::-1]==str(x_new):
            return str(x_new)
        else:
            x_new-=1


def convert(n,b):
    n_str=str(n)
    ans=''
    for i in range(10,-1,-1):
        ans+=str(int(n/b**i))
        if n%b**i==0:
            if i>0:
                for p in range(i):
                    ans+='0'
            break
        else:
            n=n%b**i
    return(str(int(ans)))
        


ans=0
N,b=input().split()
N=int(N)
b=int(b)
#N=int(input())
for i in range(N,0,-1):
    i_str=str(i)
    if i_str==i_str[::-1]:
        bb=convert(i,b)
        if bb==bb[::-1] :
            ans+=i
print(ans)

