import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

message = input().split("32")
new_l =[]
for i in message :
    new_l.append(list(map(int,i.split())))

print (new_l)


for i in new_l :
  for j in range(len(i)) :
    print(chr(i[j]),end = "")
  print(" ",end="")
