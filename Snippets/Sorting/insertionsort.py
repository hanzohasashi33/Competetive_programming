def insertionsort(l,n) :
  for i in range(1,n) :        # traverses through unsorted list
    temp = l[i]
    j = i - 1 

    while(j >= 0 and l[j] > temp) :        # swapping function
      l[j + 1] = l[j]
      j -= 1
    
    l[j + 1] = temp            #puts the unsorted element in the correct position



if __name__ == "__main__" :
  n = input("")
  l = []
  for i in range(n) : 
    a = input("")
    l.append(a)
  
  insertionsort(l,n)
  print l
