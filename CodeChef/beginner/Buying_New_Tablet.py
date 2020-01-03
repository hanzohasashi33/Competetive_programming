# cook your dish here
test = int(input())
while test > 0 :
  n,b = map(int,input().split())
  l = []
  while n > 0 :
    parameters = list(map(int,input().split()))
    l.append(parameters)
    n -= 1
  maxi = 0
  for items in l :
    if(items[1]*items[0] >= maxi and items[2] <= b) :
      maxi = items[1] * items[0]
  
  if maxi == 0 :
    print ("no tablet")
  else :
    print (maxi)

  #print (l)
  test -= 1
