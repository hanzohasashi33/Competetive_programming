# Write your code here
test = int(input())
while test > 0 :
    n = input()
    count = 0
    l = ['a','e','i','o','u','A','E','I','O','U']
    for i in n :
        if i in l :
            count += 1
    print(count)
    test -= 1
