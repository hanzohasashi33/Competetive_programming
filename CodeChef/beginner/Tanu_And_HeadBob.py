t = input("")

while (t > 0) :
  n = input("")
  nods = raw_input("")
  count_n = 0
  count_i = 0
  for nod in nods :
    if nod == 'N' :
      count_n += 1
    elif nod == 'I' :
      count_i += 1 
  if count_n == n :
    print "NOT SURE"
  elif count_i > 0 :
    print "INDIAN"
  else :
    print "NOT INDIAN"  
  t -= 1
