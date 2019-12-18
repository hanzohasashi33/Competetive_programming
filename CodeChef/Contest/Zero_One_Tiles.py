n1,n2 = 1,0
n = input("")
for i in range(n) :
  n2,n1 = n1,(n1 + n2) % 15746

print n1
