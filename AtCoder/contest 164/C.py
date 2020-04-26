n = int(input())
l = []
while n > 0 :
    l.append(input())
    n -= 1

uniq = set(l)
print(len(uniq))
