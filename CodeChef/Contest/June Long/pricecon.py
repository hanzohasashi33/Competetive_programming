test = int(input())
while test > 0 :
    n,k = map(int,input().split())
    p = list(map(int,input().split()))
    original = 0
    later = 0
    for i in p :
        if i > k :
            later += k
            original += i 
        else :
            later += i 
            original += i
    print(original-later) 
    test -= 1