l1 = list (map (int, input().strip().split()))
n = l1[0]
k = l1[1]
l = list (map (int, input().strip().split()))
l.sort()
print(sum(l[0:k]))
