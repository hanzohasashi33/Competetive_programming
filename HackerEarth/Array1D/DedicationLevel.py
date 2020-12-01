# Write your code here
n = int(input())
d = {}
while n > 0 :
    a,m = input().split()
    d[a] = int(m)
    n -= 1

res = {key: val for key, val in sorted(d.items(), key = lambda ele: ele[1], reverse = True)}

x = list(res.items())
for i in range(3):
    print(x[i][0])
