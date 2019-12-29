import math
test=int(input())
while test > 0 :
    n,v,u=map(int,input().split(" "))
    m=math.sqrt(2)*n
    if (n+n)/u<=m/v:
        print("Elevator")
    else:
        print("Stairs")
    test -= 1 
