# Write your code here
n = int(input())
l = list(map(int,input().split()))

l.sort()
minsum = sum(l[:n-1])
l = l[::-1]
maxsum = sum(l[:n-1])
print(minsum,maxsum,sep= " ")
