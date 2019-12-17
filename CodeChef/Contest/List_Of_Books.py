test = input("")
books = raw_input("").split(" ")
#for book in books :
  #book = int(book)

n = input("")
for i in range(n) :
  a = input("")
  print books[a - 1]
  books.pop(a - 1)
