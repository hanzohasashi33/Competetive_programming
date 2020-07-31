#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the equalizeArray function below.
def equalizeArray(arr):
    dict = {}
    for i in arr :
        if i in dict :
            dict[i] += 1
        else :
            dict[i] = 1
    maximum_count = max(dict.values())
    return (len(arr)-maximum_count)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
