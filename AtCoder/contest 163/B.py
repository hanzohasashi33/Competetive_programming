n,m = map(int,input().split())
assign = list(map(int,input().split()))
work = sum(assign)
if n - work >= 0 :
    print(n - work)
else :
    print("-1")
