//https://www.spoj.com/problems/FCTRL2/
def factorial(n) :
    if n == 1 :
        return 1
    else :
        return n * factorial(n - 1)




if __name__ == "__main__" :
    test = int(input())
    while test > 0 :
        n = int(input())
        print(factorial(n))
        test -= 1
