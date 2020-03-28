X,Y,A,B,C=(int(x) for x in input().split())
P=list(map(int, input().split()))
Q=list(map(int, input().split()))
R=list(map(int, input().split()))
 
D=sorted(P, reverse=True)[:X]
E=sorted(Q, reverse=True)[:Y]
Z=X+Y
if C>=Z:
    F=sorted(R, reverse=True)[:Z]
else:
    F=R
 
D.extend(E)
D.extend(F)
I=sorted(D, reverse=True)[:Z]
 
print(sum(I))
