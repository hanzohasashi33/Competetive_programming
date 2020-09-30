# https://practice.geeksforgeeks.org/problems/unique-numbers/0

t = int(input())
for _ in range(t):
    l = list (map (int, input().strip().split()))
    m = l[0]
    n = l[1]
    for i in range(m,n+1):
        s = str(i)
        l=[]
        for j in s:
            l.append(j)
        if len(set(l)) == len(l):
            print(i,end=" ")
    print()
