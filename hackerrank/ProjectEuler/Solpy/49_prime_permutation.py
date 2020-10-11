import itertools


def isPrime(x):
    x = int(x)
    if x < 2:
        return False
    for i in range(2, int(x**.5)+1):
        if x % i == 0:
            return False
    return True


def nextPrime(p):
    while(True):
        p += 1
        if isPrime(p):
            return p


def getdigitkey(n):
    digit = "".join(sorted(str(n), reverse=True))
    return int(digit)


def isAP(ar):
    cd = ar[1]-ar[0]
    for i in range(len(ar)-1):
        if not (ar[i+1]-ar[i]) == cd:
            return False
    return True


def getAP(ar, l):
    cd = {}
    for i in range(len(ar)-1):
        for j in range(i+1, len(ar)):
            key = ar[j]-ar[i]
            cd.setdefault(key, set())
            cd[key].add(ar[i])
            cd[key].add(ar[j])
    for x in cd:
        if len(cd[x]) == l:
            if isAP(sorted(cd[x])):
                return sorted(cd[x])
    return []


N, K = map(int, input().split())
prime = {}
for n in range(10, N+1):
    if isPrime(n):
        prime.setdefault(getdigitkey(n), set())
for key in prime:
    num = itertools.permutations(sorted(str(key)))
    for p in num:
        p = int("".join(p))
        if len(str(p)) == len(str(key)):
            if isPrime(p):
                prime[key].add(p)
    if len(prime[key]) >= K:
        ar = sorted(prime[key])
        out = getAP(ar, K)
        if len(out) == K:
            st = ''
            for x in out:
                st += str(x)
            print(st)
