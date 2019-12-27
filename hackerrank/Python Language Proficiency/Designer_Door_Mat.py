x,y = map(int,input("").split())
for i in range(1,int(x/2) + 1) :
    for j in range(0,(int(x/2)-i + 1)*3) :
        print("-",end="")
    #print(" ",end = "")
    for k in range(2*i-1) :
        print(".|.",end = "")
    for j in range(0,(int(x/2)-i+ 1)*3) :
        print("-",end="")
    print()
print("-" * int((y-7)/2) + "WELCOME" + "-" * int((y-7)/2))
for i in range(1,int(x/2)+1) :
    for j in range(i*3) :
        print("-",end = "")
    #print(" ",end = "")
    for k in range(2*(int(x/2)-i + 1)-1) :
        print(".|.",end = "")
    for j in range(i*3) :
        print("-",end = "")
    print ()
