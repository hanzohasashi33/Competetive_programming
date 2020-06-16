def recur(num) :
    while num >= 1 :
        if num%2 == 0 :
            return recur(num//2)
        else :
            return num 


def solve(tom) :
    if tom%2 != 0 :
        print(tom//2)
    if tom%2 == 0 :
        number = recur(tom)
        print(number//2)





test = int(input())
while test > 0 :
    ts = int(input())
    solve(ts)
    test -= 1