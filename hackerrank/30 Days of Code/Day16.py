#!/bin/python3

import sys

S = input()
try :
    print(int(S))
except ValueError :
    print("Bad String")
