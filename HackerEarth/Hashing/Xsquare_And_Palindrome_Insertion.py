# Write your code here
import math
import numpy as np 
import itertools 
import os 
import re 
import sys 


if __name__ == "__main__":
    test = int(input())
    while test > 0 :
        str1 = input()
        count = 0
        dict = {}
        for i in str1 :
            if i in dict :
                dict[i] += 1
            else :
                dict[i] = 1
        for key,value in dict.items() :
            if value%2 == 1 :
                count += 1
        if count == 0 :
            print(count)
        else :
            print(count - 1)
        test -= 1
