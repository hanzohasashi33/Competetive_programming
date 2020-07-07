# Write your code here
test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    q = int(input())
    while q > 0 :
        x = int(input())
        if x in l :
            print("Yes")
        else :
            print("No")
        q -= 1
    test -= 1
