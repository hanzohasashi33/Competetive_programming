n = int(input())
l = list(map(int,input().split()))
l.sort()

count = 0
for i in range(n) :
    ok = True
    for j in range(i+1,n) :
        if l[i]%l[j] == 0 :
            ok = False 
            break 
    if ok :
        count += 1

if l[n-1] == l[n-2] :
    count -= 1
print(count)