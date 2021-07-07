# https://practice.geeksforgeeks.org/problems/arya-and-the-great-war/0

def find1s(n):
    s = bin(n).replace('0b','')
    print(s.count('1'))

t = int(input())
for _ in range(t):
    n = int(input())
    find1s(n)
