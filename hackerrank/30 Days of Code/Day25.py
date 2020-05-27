# Enter your code here. Read input from STDIN. Print output to STDOUT
import math 


def prime(n) :
    count = 0
    for i in range(1,math.ceil(math.sqrt(n))+1) :
        if n%i == 0:
            count += 1 
    if count != 1 :
        print("Not prime")
    else :
        print("Prime")
    

if __name__ == "__main__" :
    test = int(input())
    while test > 0 :
        n = int(input())
        if n == 2 or n==3 :
            print("Prime")
        elif n == 1 :
            print("Not prime")
        else :
            prime(n)
        test -= 1
