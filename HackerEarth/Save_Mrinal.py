# Write your code here
n = int(input())
a = list(map(int,input().split(' ')))
m = int(input())

carry = None
for _ in range(m):
    x = input()
    if carry==None: 
        try:
            i, j = map(int,x.split(' '))
        except:
            i = int(x)
            j, carry = map(int,input().split(' '))
    else:
        i = carry
        j, carry = map(int,x.split(' '))
    print(len(set(a[i-1:j])))
