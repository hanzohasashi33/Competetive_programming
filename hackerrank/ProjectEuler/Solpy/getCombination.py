#!/usr/bin/python
import ipdb
def getComb(s,curr,r,ans):
    if r<1:
        for x in curr:
            ans.append(x)
        return curr
    else:
        i=0
        for e in curr:
            p=1
            for c in s[i:-r]:
                nxt=[]
                nxt.append(e+c)
                getComb(s[p:],nxt,r-1,ans)
                p+=1
            i+=1

ans=[]
xx=getComb('123456',[' '],3,ans)
ipdb.set_trace()
