# Write your code here
test = int(input())

while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    count = 0
    mini = min(l)
    for i in l :
        if i == mini :
            count += 1
    if count%2 != 0 :
        print("Lucky")
    else :
        print("Unlucky")
    test -= 1
