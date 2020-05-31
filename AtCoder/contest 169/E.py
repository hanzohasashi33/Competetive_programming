import itertools

N = int(input())
AB = [list(map(int ,input().split())) for _ in range(N)]

p = itertools.permutations(AB,N)
ans = 0
s = set()

for v in p:
    if N % 2 != 0:
        m = list(p)[int(N+1/2-1)]
        if m not in s:
            ans += 1
            s.add(m)
    else:
        k = list(p)[N/2-1]
        l = list(p)[N/2]
print(ans)
