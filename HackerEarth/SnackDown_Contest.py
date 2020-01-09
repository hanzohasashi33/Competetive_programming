test = int(input())

while test > 0 :
    q = int(input())
    l = list(map(int,input().split()))
    p1 = []
    for i in range(1,len(l)) :
        p1.append(l[i])
    l2 = list(map(int,input().split()))
    for i in range(1,len(l2)) :
        p1.append(l2[i])
    a = set(p1)
    if len(a) == q :
        print ("YES")
    else :
        print ("NO")
    test -= 1
