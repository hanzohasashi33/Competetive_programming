test = int(input())
while test > 0 :
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    a.sort()
    b.sort()
    b.reverse()
    dot = 0
    for i in range(n) :
        dot += a[i] * b[i]
    print(dot)
    test -= 1
