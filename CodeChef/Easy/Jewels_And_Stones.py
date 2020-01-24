# cook your dish here
test = int(input())
while test > 0 :
  count = 0
  jewels = input()
  mined = input()
  #mined2 = set(mined)
  #jewel2 = set(jewels)
  for i in mined :
    if i in jewels :
      count += 1
  print (count)
  test -= 1
