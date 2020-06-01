# Write your code here
import math
import numpy as np 
import itertools 

if __name__ == "__main__":
    n = int(input())
    l = []
    while n > 0 :
        x,y = map(int,input().split())
        l.append((x,y))
        n -= 1
    dict = {}
    for i in l :
        if i in dict :
            dict[i] += 1
        else :
            dict[i] = 1

    for i,j in sorted(dict.items()) :  
        print(i[0],i[1],j)
        
    """ 
    for key,values in dict.items() :
        print(key[0],key[1],values)
    """
