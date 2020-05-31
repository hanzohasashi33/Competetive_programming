#! /usr/bin/env python3
import math 
import numpy 


def number(n,pos) :
    if pos <= math.ceil(n/2) :
        #odd 
        num = 1 + (pos - 1)*2
    else :
        #even  
        num = 2 + (pos - math.ceil(n/2) - 1)*2
    return num 



if __name__ == "__main__":
    n,pos = map(int,input().split())
    num = number(n,pos)
    print(num)
