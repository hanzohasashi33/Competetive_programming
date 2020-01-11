# Write your code here
test = int(input())
while test >  0 :
    n,k = [int(x) for x in input().split()]
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    count = 0
    maxi = max(b) + 1
    for i in range(n) :
        if maxi >= a[i] :
            count += k * (maxi - a[i])
            
    print(count)
    test -= 1
