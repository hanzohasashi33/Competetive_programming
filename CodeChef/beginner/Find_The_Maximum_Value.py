# cook your dish here
test = int(input())
while test > 0 :
    l = list(map(int,input().split()))
    for i in l :
        if(i == len(l) - 1) :
            l.remove(i)
            print(max(l))
            break
    test -= 1
