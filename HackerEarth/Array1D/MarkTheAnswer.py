# Write your code here
n,x = input().split()
n = int(n)
x = int(x)
l = list(map(int,input().split()))

count = 0
flag = 0
for i in l:
    if i <= x :
        count += 1
    else :
        flag += 1
    if flag == 2:
        break

print(count)
