n = int(input())
a = list (map (int, input().strip().split()))
x = 0
for i in range(n):
    x^=a[i]
for i in range(n):
    print(a[i]^x,end=" ")
