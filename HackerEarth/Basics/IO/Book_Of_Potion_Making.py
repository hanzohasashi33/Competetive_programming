# Write your code here

num = input()
n = len(num)
add = 0
for i in range(n) :
    add += ((i+1)*int(num[i]))


if add%11 == 0 :
    print("Legal ISBN")
else :
    print("Illegal ISBN")
