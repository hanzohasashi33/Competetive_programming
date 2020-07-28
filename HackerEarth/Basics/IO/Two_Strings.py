from collections import defaultdict
# Write your code here

test = int(input())
while test > 0 :
    flag = 0
    a,b = input().split()
    strdict = defaultdict(int)
    for i in a :
        if i in strdict :
            strdict[i] += 1
        else :
            strdict[i] = 1
    for i in b :
        if i in strdict :
            strdict[i] -= 1
        else :
            strdict[i] = 1
    for i in strdict :
        if strdict[i] != 0 :
            flag = 1
            print("NO")
            break
    if flag == 0 :
        print("YES")
    test -= 1
