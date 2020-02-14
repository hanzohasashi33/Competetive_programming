test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    l.sort()
    for i in range(1,n) :
        if(l[i] == l[i - 1]) :
            print(l[i])
            break 
    else :
        if(l[0] + 1 not in l) :
            print(l[0])
        else :
            print(l[-1])
    test -= 1
