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
        flag = 0 
        str1 = input()
        dict = {}
        for i in str1 :
            if i in dict :
                dict[i] += 1
            else :
                dict[i] = 1
        for key,value in dict.items() :
            if value > 1 :
                flag = 1
                print("Yes")
                break 
        if flag == 0 :
            print("No")
        test -= 1
