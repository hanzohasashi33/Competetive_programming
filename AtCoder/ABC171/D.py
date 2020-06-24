n = int(input())
l =  list (map (int, input().strip().split()))
d={}
s = 0
for i in range(n):
    s+=l[i]
    if l[i] not in d:
        d[l[i]]  = 1 
    else:
        d[l[i]]+=1 
q = int(input())
for i in range(q):
    l2 =  list (map (int, input().strip().split()))
    b = l2[0]
    c = l2[1]
    x = 0
    y = 0
    if b not in d:
        x = 0
    else:
        x = d[b]
    if c not in d:
        y = 0
    else:
        y = d[c]
    test1 =  (c-b)*x
    s = s+test1
    print(s)
    d[b]=0
    d[c] = x+y
