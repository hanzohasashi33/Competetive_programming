def isPrime(x):
    x = int(x)
    for i in range(2, int(x**.5)+1):
        if x % i == 0:
            return False
    return True


def get_primes(n):
    num = set()
    prime = set()
    for i in range(2, n+1):
        num.add(i)
    l = len(num)
    while(l > 0):
        p = num.pop()
        prime.add(p)
        i = 2
        while(i*p <= n+1):
            if i*p in num:
                num.remove(i*p)
            i += 1
        l = len(num)
    return prime


def prime_factors(x):
    x = int(x)
    fact = set()
    prime = get_primes(x)
    for p in get_primes(int(x**0.5)+1):
        if x % p == 0:
            w = int(x/p)
            fact.add(p)
            if w in prime:
                fact.add(w)
    return len(fact)


N, K = map(int, input().split())
n = 2
while(n < N+1):
    window = True
    for p in range(K):
        if not prime_factors(n+p) == K:
            window = False
            break
    if window:
        print(n)
        n += 1
    else:
        n += p+1
