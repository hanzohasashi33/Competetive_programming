import itertools
import math


def is_square(n):
    r = math.sqrt(n)
    if (int(r)**2 == n):
        return int(r)
    else:
        return -1


n = int(input())
for i in range(n):
    N = int(input())
    leng = []
    total = {}
    ans = 0
    for l in range(1, N-1):
        leng.append(l)
    pair = itertools.product(leng, repeat=2)
    for a in range(1, N-2):
        for b in range(a, N-2):
            if a+b < N-1:
                c = (a**2)+(b**2)
                r = is_square(c)
                if r > 0 and a+b+r <= N:
                    total.setdefault(a+b+r, 0)
                    if total[a+b+r] == 0:
                        ans += 1
                    total[a+b+r] += 1
    print(ans)
