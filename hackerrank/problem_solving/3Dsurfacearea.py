HW = list(map(int, input().strip().split(' ')))
import math
H = HW[0]
W = HW[1]
sum = 0
w=[]
for i in range(H):
    a = list(map(int, input().strip().split(' ')))
    for x in a:
        sum = sum+x
    w.append(a)
t = 6*sum
for x in w:
    for y in x:
        t = t-2*(y-1)
for i in range(H):
    for j in range(0,W-1):
        if w[i][j]>w[i][j+1]:
            t = t - 2*(w[i][j+1])
        else:
            t=t-2*(w[i][j])
for j in range(W):
    for i in range(H-1):
        if w[i][j]>w[i+1][j]:
            t=t-2*(w[i+1][j])
        else:
            t = t-2*(w[i][j])
print(t)
