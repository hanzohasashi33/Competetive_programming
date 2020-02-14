# cook your dish here
test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    l.sort()
    count = 0
    for i in range(n - 1) :
        if l[i] == l[i + 1] :
            print("NO")
            break
        else :
            count += 1
    if count == n - 1 :
        print("YES")
    test -= 1
