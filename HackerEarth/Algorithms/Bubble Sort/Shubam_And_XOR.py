# Write your code here
from collections import Counter

n = int(input())
l = list(map(int,input().split()))

d = Counter(l)
count = 0
for key,value in d.items() :
    if value > 1 :
        count += (value * (value - 1))/2

print ("%.f"%count)
