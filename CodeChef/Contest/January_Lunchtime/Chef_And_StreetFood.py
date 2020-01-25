# cook your dish here
test = int(input())
while test > 0 :
  n = int(input())
  l2 = []
  for i in range(n) :
    l1 = list(map(int,input().split()))
    l2.append((l1[1]//(l1[0] + 1)) * l1[2])
  print(max(l2))
  test -= 1
