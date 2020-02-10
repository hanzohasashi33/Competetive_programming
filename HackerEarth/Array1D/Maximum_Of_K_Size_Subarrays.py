# Write your code here
n,k = input().split()
n = int(n)
k = int(k)

l = list(map(int,input().split()))
i = 0

while (i < n) :
    if (i + k < n + 1) :
        print(max(l[i:i + k]),end = " ")
    i += 1
