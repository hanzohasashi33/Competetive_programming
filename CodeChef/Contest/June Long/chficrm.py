def cangivechange(n,l) :
    rem = 0
    ctg = 0
    setl = set(l)
    if 15 not in setl :
        for i in range(n) :
            ctg = l[i]
            ctg -= 5
            if(ctg > rem) :
                return "NO"
            elif ctg == 0 :
                rem += 5 
            elif ctg == rem :
                rem = 0
            elif ctg < rem :
                rem -= ctg 
        return "YES"
    else :
        flag = "YES"
        if l[0] != 5 :
            flag = "NO"
        else :
            rem = 5
            for i in range(1,n) :
                tog = l[i] - 5
                if tog > rem :
                    flag = "NO"
                    break 
                else :
                    rem = rem - tog + 5
        return flag  






test = int(input())
while test > 0 :
    n = int(input())
    l = list(map(int,input().split()))
    result = cangivechange(n,l)
    print(result)
    test -= 1 