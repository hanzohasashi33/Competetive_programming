def isPrime(x):
    x = int(x)
    if x < 2:
        return True
    for i in range(2, int(x**.5)+1):
        if x % i == 0:
            return False
    return True


N, K = "1000 3".split()
N = int(N)
K = int(K)
prime = []
pair = []
for i in range(1, N):
    if isPrime(i):
        prime.append(i)
for i in range(len(prime)-1):
    pair = []
    pair.append(prime[i])
    for j in range(i+1, len(prime)):
        s = ''
        for x in pair:
            s += str(x)
        if isPrime(int(s+str(prime[j]))):
            pair.append(prime[j])
            if len(pair) == K:
                break
        if len(pair) == K:
            break
    if len(pair) == K:
        break
