# https://practice.geeksforgeeks.org/problems/collecting-trees/0

t = int(input())
for _ in range(t):
    n = int(input())
    print((bin(n).replace(" ","")).count('1'))
