# cook your code here
def distance(x1,y1,x2,y2) :
  return (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 -y1))) **(0.5)


t = input("")

while (t > 0) :
  max_dis = input("")
  cx,cy = raw_input("").split(" ")
  hx,hy = raw_input("").split(" ")
  sx,sy = raw_input("").split(" ")
  cx = int(cx)
  cy = int(cy)
  hx = int(hx)
  hy = int(hy)
  sx = int(sx)
  sy = int(sy)
  disch = distance(cx,cy,hx,hy)
  dishs = distance(hx,hy,sx,sy)
  discs = distance(cx,cy,sx,sy)

  if(disch <= max_dis and dishs <= max_dis and disch + dishs <= 2 * max_dis) :
    print "yes"
  elif(disch <= max_dis and discs <= max_dis and disch + discs <= 2 * max_dis) :
    print "yes"
  elif(dishs <= max_dis and discs <= max_dis and dishs + discs <= 2 * max_dis) :
    print "yes"
  else :
    print "no"

  t -= 1
