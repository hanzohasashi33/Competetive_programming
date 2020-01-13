# Write your code here
a,b,c = [int(x) for x in input().split()]
a,b = b,a
a = a * c
b = b + c
print(a,b)
