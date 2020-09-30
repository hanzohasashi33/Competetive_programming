# https://practice.geeksforgeeks.org/problems/parity-of-unsigned-integer/0


def parity(n):
    str1 = str(bin(n))
    count_1 = str1.count('1')
    if(count_1%2):
        return 'odd'
    else:
        return 'even'
    
t = int(input())
for i in range(t):
    n = int(input())
    print(parity(n))
