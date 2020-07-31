import numpy as np
# Write your code here
m,n = map(int,input().split())
l = []
while m > 0 :
    row = list(map(int,input().split()))
    l.append(row)
    m -= 1
arr = np.array(l)
arr = arr.T
for i in arr :
    print(*i)
