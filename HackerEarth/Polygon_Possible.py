'''
test = int(input())
while test > 0 :
    n = int(input())
    sides = list(map(int,input().split()))
    count = 0
    for i in sides :
        if sum(sides) - i > i :
            count += 1
        else :
            count += 0
            
    if count == len(sides) :
        print ("Yes")
    else :
        print ("No")
    
    test -= 1
'''
T=int(input())
a=[]
for i in range(T):
    n=int(input())
    li=[int(i) for i in input().split()]
    a=sorted(li)    
    b=max(li)
    c=a.pop()
    s=sum(a)
    if c<s:
        print("Yes")
    else:
        print("No")
