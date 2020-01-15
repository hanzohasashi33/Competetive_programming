# Write your code here
test = int(input())
while test > 0 :
    n,m = [int(x) for x in input().split()]
    l = list(map(int,input().split()))
    for i in range(n - 1) :
        for j in range(n - i - 1) :
            if l[j] > l[j+1] :
                l[j],l[j+1] = l[j+1],l[j]
    
    minsum = sum(l[:n-m])
    l = l[::-1]
    maxsum = sum(l[:n-m])
    print(maxsum - minsum)
    test -= 1
