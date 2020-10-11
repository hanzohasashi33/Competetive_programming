#!/usr/bin/python3
import itertools


def sum_digit(n):
    n=str(n)
    su=0
    for d in n:
        su+=int(d)
    return su
n=int(input())
num=[]
for i in range(n):
    num.append(i+1)
pair=itertools.product(num, repeat=2)
max_sum=0
for x in pair:
    a,b=x
    su=sum_digit(a**b)
    if su>max_sum:
        max_sum=su
print(max_sum)
#ipdb.set_trace()
