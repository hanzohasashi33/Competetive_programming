#!/usr/bin/python
import ipdb
def next_sq_num(n):
    n=sorted(str(n))
    n=[int(x) for x in n]
    ans=0
    for d in n:
        ans+=d**2
    return ans

n=1
Max=10**n
set_1=set()
set_89=set()

set_1.add(1)
set_89.add(89)

start=1
end=10
count={}
for n in range(1,10):
    for i in range(start,10**n):
        if i in set_1:
            continue
        if i in set_89:
            continue
        next_num=next_sq_num(i)
        while(True):
            if next_num in set_1:
                set_1.add(i)
                break
            if next_num in set_89:
                set_89.add(i)
                break
            next_num=next_sq_num(next_num)
    count[i]=len(set_89)
    start=(10**n)+1
    print(len(set_89))
ipdb.set_trace()
print(len(set_89))




