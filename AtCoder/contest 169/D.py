import math 
import itertools



def factorize(n):
   
    b = 2
    fct = []
    while b * b <= n:
        while n % b == 0:
            n //= b
            fct.append(b)
        b = b + 1
    if n > 1:
        fct.append(n)
    return fct


def resolve(N):

    ans = 0
    factorize_N = factorize(N)

    if not factorize_N:
        print(0)
        return

    for key, value in itertools.groupby(factorize_N):
        count = len(list(value))
        for i in range(1, count + 1):
            count -= i
            if (count < 0):
                break
            ans += 1

    print(ans)


if __name__ == "__main__":
    n = int(input())
    resolve(n)
