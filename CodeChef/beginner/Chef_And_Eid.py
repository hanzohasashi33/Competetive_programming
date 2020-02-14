test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    l.sort()
    minimum = 100000
    for i in range(n - 1) :
        if(l[i + 1] - l[i] < minimum) :
            minimum = l[i + 1] - l[i]
    print(minimum)
    test -= 1
