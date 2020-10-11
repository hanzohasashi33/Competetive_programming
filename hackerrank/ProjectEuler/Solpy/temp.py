p = lambda n : [x for x in range(2, n+1) if not 0 in [x % z for z in range(2, int(x**0.5+1))]]
for _ in range(int(input())):
    n = int(input())
    if n < 8: 
        print(3)
    else:
        for d in p(n)[::-1]:
            period = 1
            while pow(10,period,d) != 1: period += 1
            if d-1 == period: print(d)
