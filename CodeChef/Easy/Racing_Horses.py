# cook your dish here
test = int(input())
while test > 0 :
  n = int(input())
  l = list(map(int,input().split()))
  l.sort()
  mini = l[1] - l[0]
  for j in range(n-1) :
    if 0 <= l[j+1] - l[j] < mini :
      mini = l[j+1] - l[j]
  print (mini)
  test -= 1
