#! /usr/bin/env python3

def sock_days(n,m) :
    if n == m :
        return n + 1
    elif m > n :
        return n 
    else :
        x = n 
        rem = n//m
        count = 0
        while (x - m + 1 > 0) :
            count += 1
            x = x - m + 1
        return n + count 



if __name__ == "__main__":
    n,m = map(int,input().split())
    days = sock_days(n,m)
    print(days)