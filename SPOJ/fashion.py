test = int(input())
while test > 0 :
    n = int(input())
    men = list(map(int,input().split()))
    fem = list(map(int,input().split()))
    men.sort()
    fem.sort()
    hot = 0
    for i in range(n) :
        hot += men[i] * fem[i]
    print(hot)
    test -= 1
