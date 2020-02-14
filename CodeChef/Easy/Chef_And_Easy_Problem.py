test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    l.sort()
    l.reverse()
    count = 0
    for i in range(0,n,2) :
        count += l[i]
    print(count)
    test -= 1
