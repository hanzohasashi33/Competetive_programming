# Write your code here
import math
import numpy as np 
import itertools
import os 
from collections import defaultdict 
import re 
import sys 
import string

def pairs(l,n,k) :
    dict = defaultdict(int)
    for i in l :
        if i in dict:
            dict[i] += 1
        else :
            dict[i] = 1
    count = 0 
    for i in l :
        if k-i > 0 :
            count += dict[k-i]
            if k-i == i :
                count -= 1
    return count/2



if __name__ == "__main__":
    n,k = map(int,input().split())
    l = list(map(int,input().split()))
    flag = 0
    if pairs(l,n,k) :
        print("YES")
    else :
        print("NO")
