def add(a,b) :
  count = 0 
  while ( b > 0 ) :
    count += 1
    u = a ^ b
    v = a & b
    a = u 
    b = 2 * v
  return count  


if __name__ == "__main__" :
  test = input("")
  while(test > 0) :
    a = input("")
    b = input("")
    print (add(a,b))
    test -= 1
