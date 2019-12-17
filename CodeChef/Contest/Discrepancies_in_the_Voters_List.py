n1,n2,n3 = raw_input("").split(" ")
n1 = int(n1)
n2 = int(n2)
n3 = int(n3)
sum = n1 + n2 + n3 
l = [] 
for i in range(sum) :
  a = input("")
  l.append(a)
result_list = []
for i in l :
  count = l.count(i)
  if count > 1 :
    result_list.append(i)

result_list = list(dict.fromkeys(result_list))
print len(result_list)
result_list.sort()
for i in result_list :
  print i 
