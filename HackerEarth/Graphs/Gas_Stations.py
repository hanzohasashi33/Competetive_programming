# Write your code here
n,x = map(int,input().split())
l = list(map(int,input().split()))

count = 0
for i in l :
    if x > 0 :
        x -= i
        count += 1
    else :
        break

print(count)
