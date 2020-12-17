import math


def digit_factorial_sum(n):
    s = str(n)
    su = 0
    for d in s:
        su += math.factorial(int(d))
    return su


n = int(input())
testdata = []
end = 0
length = 0
for i in range(n):
    testdata.append(input())
    N, L = testdata[-1].split()
    N = int(N)
    L = int(L)
    if length < L:
        length = L
    if end < N:
        end = N
digit_ser = {}
for key in range(end+1):
    i = key
    digit_ser.setdefault(key, [])
    sr = []
    sr.append(i)
    while(len(sr) < length+1):
        next_num = digit_factorial_sum(i)
        if next_num in sr:
            break
        else:
            sr.append(next_num)
            i = next_num
    digit_ser[key] = sr
for x in testdata:
    N, L = x.split()
    N = int(N)
    L = int(L)
    ans = []
    for x in range(N+1):
        if len(digit_ser[x]) == L:
            ans.append(str(x))
    if len(ans) > 0:
        print(" ".join(ans))
    else:
        print('-1')
