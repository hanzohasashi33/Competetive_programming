#!/bin/python

from __future__ import print_function

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    #
    # Write your code here.
    #
    pages = min(p/2,n/2 - p/2)
    return pages

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    p = int(raw_input())

    result = pageCount(n, p)

    fptr.write(str(result) + '\n')

    fptr.close()
