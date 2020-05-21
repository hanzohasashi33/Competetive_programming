#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
n = len(a)
swaps = 0
for i in range(0,n) :
    for j in range(0,n-i-1) :
        if a[j] > a[j+1] :
            a[j+1],a[j] = a[j],a[j+1]
            swaps += 1
print("Array is sorted in " + str(swaps) + " swaps.")
print("First Element:",str(a[0]))
print("Last Element:",str(a[-1]))
