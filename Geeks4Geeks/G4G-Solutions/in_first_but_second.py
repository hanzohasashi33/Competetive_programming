# https://practice.geeksforgeeks.org/problems/in-first-but-second/0/

def findValues(a,b):
    d={}
    for i in range(len(b)):
        d[b[i]]=1
    for i in range(len(a)):
        if(a[i] not in d.keys()):
            print(a[i],end=" ")

t=int(input())
for i in range(t):
    mainStr = str(input())
    s1 = str(input())
    l1 = s1.split()
    a = [int(x) for x in l1]
    s2 = str(input())
    l2 = s2.split()
    b = [int(x) for x in l2]
    findValues(a,b)
    print()
