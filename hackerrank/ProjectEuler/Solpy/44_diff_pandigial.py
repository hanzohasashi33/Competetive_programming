import math


def padigital(n):
    return ((n*((3*n)-1)) >> 1)


def solve_quadratic(a, b, c):
    d = math.sqrt((b**2)-(4*a*c))
    x1 = (-b+d)/(2*a)
    x2 = (-b-d)/(2*a)
    return(x1, x2)


def is_pandigital(t):
    sol = solve_quadratic(3, -1, -2*t)
    for x in sol:
        if x > 0:
            if x-int(x) == 0:
                return True
    return False


N, K = "10 2".split()
N = int(N)
K = int(K)
pan = []
for i in range(1, N):
    pan.append(padigital(i))
is_pandigital(5)
for x in range(len(pan)-K):
    if is_pandigital(pan[x]+pan[x+K]):
        if x+K < len(pan):
            print(pan[x])
    elif x-K > -1:
        if is_pandigital(pan[x]-pan[x-K]):
            print(pan[x])
