#! /usr/bin/env python3
import numpy as np
import datetime as dt 


begin_time = dt.datetime.now()
lvls = int(input())
x = list(map(int,input().split()))
y = list(map(int,input().split()))
x = x[1:]
y = y[1:]
flag = 1

for i in range(1,lvls + 1) :
    if i not in x and i not in y :
        flag = 0
        break 
    else :
        continue


if flag == 1 :
    print("I become the guy.")
else :
    print("Oh, my keyboard!")


execution_time = dt.datetime.now() - begin_time
print(execution_time)