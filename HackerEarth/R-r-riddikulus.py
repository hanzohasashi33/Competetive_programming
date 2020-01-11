# Write your code here
n,r = [int(x) for x in input().split()]
l = list(map(int,input().split()))
while r > 0 :
    l = l[1:n] + l[0:1]
    r -= 1
for i in l :
    print(i,end = " ")
