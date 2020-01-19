# Write your code here
n,k = [int(x) for x in input().split()]
l = []
while n > 0 :
    a = int(input())
    l.append(a)
    n -= 1

while(l[0] <= k) :
    l.pop(0)
    
l = l[::-1]
while (l[0] <= k) :
    l.pop(0)
    
#print(l)
print(len(l))
