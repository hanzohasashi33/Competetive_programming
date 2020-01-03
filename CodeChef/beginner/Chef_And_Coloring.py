# cook your dish here
test = int(input(""))
while test > 0 :
  n = int(input())
  color = list(input())
  uni = set(color)
  c = [color.count(i) for i in uni]
  #print(c)
  #print (uni)
  print(n - max(c))
  test -= 1
