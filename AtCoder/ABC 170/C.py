from collections import defaultdict
if __name__ == "__main__":
    x,n = map(int,input().split())
    l = list(map(int,input().split()))
    if n == 0 :
        print(x)
    else :
        l.sort()
        count = 0
        dist = 999
        ans = -100
        for i in range(-100,201) :
            if i in l :
                continue
            if dist > abs(x - i) :
                dist = abs(x - i)
                ans = i 
        print(ans)