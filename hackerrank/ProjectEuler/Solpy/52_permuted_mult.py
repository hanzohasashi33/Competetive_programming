#!/usr/bin/python3
#import ipdb
#import helper


def isSameDigit(x,y):
    x=str(x)
    y=str(y)
    for c in x:
        p=y.find(c)
        if (p<0):
            return False
        else:
            y=y[:p]+y[p+1:]
    return True





#n,testdata=helper.readData("input")
testdata=input()



N,K= testdata.split()
N=int(N)
K=int(K)
for n  in range(1,N+1):
    out=[]
    out.append(n)
    for m in range(2,K+1):
        mult=n*m
        if not isSameDigit(mult,n):
            break
        else:
            out.append(mult)
    if len(out)==K:
        output=''
        for x in out:
            output+=str(x)+' '
        print(output[0:-1])


