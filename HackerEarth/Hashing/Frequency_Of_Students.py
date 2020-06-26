# Write your code here
n = int(input())
dict = {}
while n > 0 :
    name = input()
    if name in dict :
        dict[name] += 1
    else :
        dict[name] = 1
    n -= 1
for key,value in sorted(dict.items()) :
    print(key,value)
