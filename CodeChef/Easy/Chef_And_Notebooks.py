# cook your dish here
test = int(input())
while test > 0 :
  count = 0
  x,y,k,n = map(int,input().split())
  diff = (x - y)
  while n > 0 :
    p,c = map(int,input().split())
    if(p >= diff) :
      if(c <= k) :
        count += 1
    n -= 1
  if(count > 0) :
    print("LuckyChef")
  else :
    print ("UnluckyChef")
  test -= 1
