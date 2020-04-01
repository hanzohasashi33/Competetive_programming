# cook your dish here
test = int(input())
while test > 0 :
  total,origin = input().split()
  total = int(total)
  ladoos = 0
  while total > 0 :
    read = list(input().split())
    if read[0] == "CONTEST_WON" :
      ladoos += 300
      read[1] = int(read[1])
      if(read[1] < 20) :
        ladoos += 20 - read[1]
    elif read[0] == "TOP_CONTRIBUTOR" :
      ladoos += 300
    elif read[0] == "BUG_FOUND" :
      ladoos += int(read[1])
    else :
      ladoos += 50
    total -= 1
  if(origin == "INDIAN") :
    print(ladoos//200)
  else :
    print(ladoos//400)
  test -= 1
