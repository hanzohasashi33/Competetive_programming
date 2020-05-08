from collections import Counter
# Enter your code here. Read input from STDIN. Print output to STDOUT

x = int(input())
size = list(map(int,input().split()))
dict = Counter(size)
n = int(input())
profit = 0


while n > 0 :
    size,price = map(int,input().split())
    if dict[size] > 0 :
        dict[size] -= 1
        profit += price 
    n -= 1

print(profit)
