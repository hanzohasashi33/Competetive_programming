#! /usr/bin/env python3
import math 


if __name__ == "__main__":
    n = int(input())
    l = list(map(int,input().split()))
    if 0 in l :
        print("0")
    else :
        flag = 1
        prod = 1
        for i in range(n) :
            prod = prod * l[i]
            if prod > int(math.pow(10,18)) :
                flag = 0 
                break 
        if flag == 0 :
            print("-1")
        else :
            print(prod)
