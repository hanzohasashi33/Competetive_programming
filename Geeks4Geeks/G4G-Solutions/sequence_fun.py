# https://practice.geeksforgeeks.org/problems/sequence-fun/0/?ref=self

def seq(n):
    if n == 1: return 2
    ans = 2
    for i in range(2, n+1):
        ans = ans*i + 1
    return ans
    

cases = int(input())
for _ in range(cases):
    n = int(input())
    print(seq(n))
