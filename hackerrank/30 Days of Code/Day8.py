# Enter your code here. Read input from STDIN. Print output to STDOUT
from sys import stdin
    
dict = {}

test = int(input())
while test > 0 :
    name,val = input().split()
    dict[name] = val 
    test -= 1

lines = stdin.read().splitlines()
for line in lines :
    if line in dict :
        print(line+"="+dict[line])
    else :
        print("Not found")
