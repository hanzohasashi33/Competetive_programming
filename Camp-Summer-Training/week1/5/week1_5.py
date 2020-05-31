#! /usr/bin/env python3
import math
import numpy

def evenness(l,n) :
    x,y = 0,0
    count_even = 0
    count_odd = 0
    for i in range(n) :
        if l[i]%2 == 0 :
            count_even += 1
            x = i
        else :
            count_odd += 1
            y = i
    if count_odd == 1 :
        return y + 1
    else :
        return x + 1


if __name__ == "__main__":
    n = int(input())    
    l = list(map(int,input().split()))
    pos = evenness(l,n)
    print(pos)
