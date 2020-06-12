# Write your code here
from collections import Counter
n = int(input())
arr = list(map(int,input().split()))
l = []
ctr = Counter(arr)
m = max(ctr.values())
for i in ctr.keys():
    if ctr[i] == m:
        l.append(i)
print(min(l))
