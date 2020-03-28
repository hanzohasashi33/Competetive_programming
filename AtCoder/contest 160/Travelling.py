K,N = map(int,input().split())
A = list(map(int,input().split()))
sub = [abs(A[i] - A[i+1]) for i in range(N-1)]
sub.append(K-A[N-1]+A[0])
print(K-max(sub))
