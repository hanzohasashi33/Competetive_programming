test = int(input())
while test > 0 :
    a,b = map(int,input().split())
    sieve = []
    for i in range(b + 1) :
        sieve.append(1)
    p = 2;
    while(p * p <= b) :
        if(sieve[p] == 1) :
            j = p * p
            while(j <= b) :
                sieve[j] = 0
                j += p
        p += 1
    for i in range(a,b + 1) :
        if sieve[i] == 1 and i != 1 :
            print(i)
    test -= 1