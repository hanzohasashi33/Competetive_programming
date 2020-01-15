# cook your dish here
import sys
import os 
import math


test = int(input(""))
while(test > 0) :
  n = int(input(""))
  a = int(input(""))
  print(2 * pow(10,n) + a)
  b = int(input(""))
  print(pow(10,n) -b)
  d = int(input(""))
  print(pow(10,n) - d)
  last = int(input(""))
  sys.stdout.flush()
  if(last == -1) :
    sys.exit()
  test -=1
