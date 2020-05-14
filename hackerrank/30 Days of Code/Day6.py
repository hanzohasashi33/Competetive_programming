# Enter your code here. Read input from STDIN. Print output to STDOUT
test = int(input())
while test > 0 :
    str1 = input()
    n = len(str1)
    for i in range(0,n,2) :
        if i != n-1 and i != n-2 :
            print(str1[i],end = "")
        if i == n-1 or i == n-2 :
            print(str1[i],end = " ")
    for i in range(1,n,2) :
        print(str1[i],end = "")
    print()
    test -= 1
