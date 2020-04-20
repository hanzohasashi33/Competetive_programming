while True :
    a,b,c = map(int,input().split())
    if(a == 0 and b == 0 and c == 0) : 
        break 
    else :
        if(b - a == c - b) :
            print("AP",a + 3*(b - a),sep = " ")
        else :
            r = int(b/a)
            print("GP",a * r * r * r,sep = " ")
