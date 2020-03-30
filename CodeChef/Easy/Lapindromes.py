# cook your dish here
test = int(input())
while test > 0 :
  str = input()
  n = len(str)
  str = list(str)
  if n%2 == 0 :
    left = str[:n//2]
    right = str[n//2:]
  else :
    left = str[:n//2]
    right = str[n//2+1:]
  flag = 0
  #print(left,right)
  for i in left :
    if i in right :
      right.remove(i)
      continue
    else :
      flag = 1
      break  
  if flag == 1 :
    print("NO")
  else :
    print("YES")
  
  test -= 1
