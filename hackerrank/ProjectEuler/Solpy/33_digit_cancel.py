def gen_fraction(N):
    frac=[]
    if N==2:
        start=11
        end=99
    elif N==3:
        start=101
        end=999
    elif N==4:
        start=1001
        end=9999
    for nr in range(start,end):
        for dnr in range(nr+1,end+1):
            frac.append((nr,dnr))
    return frac
N,k=2,1
start,end=0,0
print(gen_fraction(N))
