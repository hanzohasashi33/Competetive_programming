#!/bin/python3

import os
import sys


n1,n2,n3 = map(int,input().split())
l1 = list(map(int,input().split()))
l2 = list(map(int,input().split()))
l3 = list(map(int,input().split()))

l1 = l1[::-1]
l2 = l2[::-1]
l3 = l3[::-1]

sum1 = sum(l1)
sum2 = sum(l2)
sum3 = sum(l3)

while((sum1 != sum2 or sum2 != sum3 or sum1 != sum3)) :
    if(sum1 == 0 or sum2 == 0 or sum3 == 0) :
        sum1 = 0
        break

    elif(sum1 >= sum2 and sum1 >= sum3) :
        sum1 -= l1.pop()

    elif(sum2 >= sum3 and sum2 >= sum1) :
        sum2 -= l2.pop()

    elif(sum3 >= sum1 and sum3 >= sum2) :
        sum3 -= l3.pop()


print(sum1)
