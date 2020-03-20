test = int(input())
while test > 0 :
    n,rot = map(int,input().split())
    l = list(map(int,input().split()))
    l = l[rot:] + l[:rot]
    for i in range(n) :
        print (l[i],end = " ")
    print()
    test -= 1
