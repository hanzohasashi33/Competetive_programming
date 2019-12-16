t = input("")
while(t > 0) :
  a = raw_input("")
  l = []
  for i in range(len(a)) :
    s = a[:i] + a[i + 1 :]
    l.append(int(s))
  print min(l)
  t -= 1
