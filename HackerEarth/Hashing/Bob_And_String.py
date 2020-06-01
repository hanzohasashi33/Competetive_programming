# Write your code here
# Python3 Program to find minimum number  
# of manipulations required to make  
# two strings identical  
 

import math
import numpy as np


def mod(a) :
    if a >= 0 :
        return a 
    else :
        return -a 


def countManipulations(s,t) :
    count = 0
    charcount_s = [0] * 26
    charcount_t = [0] * 26
    n1 = len(s)
    n2 = len(t)
    for i in range(n1) :
        charcount_s[ord(s[i]) - ord('a')] += 1

    for i in range(n2) :
        charcount_t[ord(t[i]) - ord('a')] += 1

    for i in range(26) :
        count += mod(charcount_s[i] - charcount_t[i])
    print(count)



if __name__ == "__main__" :
    test = int(input())
    while test > 0 :
        s = input()
        t = input()
        countManipulations(s,t)

        test -= 1
