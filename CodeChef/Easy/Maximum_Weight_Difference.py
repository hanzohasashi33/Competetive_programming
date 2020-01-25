# cook your dish here
test = int(input())
while test > 0 :
  n,k = map(int,input().split())
  l = list(map(int,input().split()))
  l.sort()
  if k > n//2 :
    k = n - k
  son = sum(l[:k])
  chef = sum(l[k:n])
  print(abs(chef - son))
  test -= 1
