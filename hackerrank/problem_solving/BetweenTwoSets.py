#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'getTotalX' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY a
#  2. INTEGER_ARRAY b
#



def getTotalX(a, b):
    # Write your code here
    count = 0
    maximumA = max(a)
    maximumB = max(b)
    minimumA = min(a)
    minimumB = min(b)
    for i in range(minimumA,maximumB+1):
        # print(i)
        flag = 0
        for j in a:
            if i%j != 0:
                flag = 1
                break
        for k in b:
            if k%i != 0:
                flag = 1
                break
        if flag == 0:
            print(i)
            count += 1
    return count
                

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
