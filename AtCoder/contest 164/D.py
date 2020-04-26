S=list(input())
S.reverse()
N=len(S)
R=[0]*N
R10=[0]*N
m=2019
K=0

R10[0]=1
R[0]=int(S[0])%m
for i in range(1,N):
    R10[i]=(R10[i-1]*10)%m
    R[i]=(R[i-1]+int(S[i])*R10[i])%m
d={}
for i in range(2019):
    d[i]=0

for i in range(N):
    d[R[i]]+=1
ans=0
for i in range(2019):
    if i == 0:
        ans += d[i]
        ans +=d[i]*(d[i]-1)//2
    else:
        ans +=d[i]*(d[i]-1)//2
print(ans)
