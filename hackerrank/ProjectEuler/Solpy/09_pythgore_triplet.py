n=int(input())

for i in range(n):
    #N=int(testdata[i])
    N=int(input())
    result=-1
    for c in range(1,int(N/2)):
        for b in range(int((N-c)/2),N-c):
            a=N-b-c
            if a>b or a<0:
                continue
            elif (a*a+b*b==c*c):
                    result=max(a*b*c,result)
    print(result)

       

