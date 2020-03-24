test = int(input())
while test > 0 :
  n = int(input())
  dir = input()
  x = 0
  y = 0
  for i in range(0,n) :
    if i == 0 :
      if dir[i] == 'L' :
        x -= 1
      elif dir[i] == 'R' :
        x += 1
      elif dir[i] == 'U' :
        y += 1
      else :
        y -= 1
    else :
      if dir[i] == 'L' and dir[i-1] != 'L' and dir[i - 1] != 'R':
        x -= 1
      elif dir[i] == 'R' and dir[i - 1] != 'R' and dir[i-1] != 'L' :
        x += 1
      elif dir[i] == 'U' and dir[i - 1] != 'U' and dir[i-1] != 'D' :
        y += 1
      elif dir[i] == 'D' and dir[i - 1] != 'D' and dir[i-1] != 'U' :
        y -= 1
  print(x,y)
  test -= 1
