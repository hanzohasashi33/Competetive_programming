def searchend(arr,x) :
    i = len(arr) - 1
    while(i >= 0) :
        if arr[i] == x :
            break
        i -= 1
    return i 


def searchbeg(arr,x) :
    i = 0
    while(i < len(arr)) :
        if arr[i] == x :
            break;
        i += 1
    return i





n = int(input())
l = list(map(int,input().split()))
x = l[:]
l.sort()
happy = 0
while(len(l) > 1) :
    a = searchbeg(x,l[0])
    b = searchend(x,l[-1])
    happy += l[0] * abs(a - b)
    happy += l[-1] * abs(a - b)
    l.pop(0)
    l.pop(-1) 
    if (a > b) :
        x.pop(a)
        x.pop(b)
    else :
        x.pop(b)
        x.pop(a)
print(happy)
#print(l)
#print(x)
