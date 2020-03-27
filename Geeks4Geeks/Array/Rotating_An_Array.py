#code
test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    d = int(input())
    l = l[d:] + l[:d]
    for i in range(n) :
        print(l[i],end = " ")
    print()
    test -= 1
