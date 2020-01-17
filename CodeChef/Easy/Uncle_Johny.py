# cook your dish here
test = int(input())
while test > 0 :
  n = int(input())
  l = list(map(int,input().split()))
  x = int(input())
  a = l[x-1]
  l.sort()
  for i in range(n) :
    if l[i] == a :
      print (i+1)
      break 
  test -= 1
