from math import ceil
# Write your code here

if __name__ == "__main__" :
    test = int(input())
    while test > 0 :
        a,b,c = map(int,input().split())
        print(int(ceil(abs((c-b)-(b-a))/2)))
        test -= 1
