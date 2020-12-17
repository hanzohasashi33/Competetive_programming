#!/usr/bin/python3
#import ipdb
#import helper

def isPrime(x):
    x=int(x)
    if x<2:
        return False
    for i in range(2,int(x**.5)+1):
        if x%i ==0 :
            return False
    return True

def factors(x):
    x=int(x)
    fact=1
    for i in range(1,int(x**.5)+1):
        if x%i==0:
            f=int(x/i)
            if isPrime(i) and fact<i:
                fact=i
            if isPrime(f) and fact<f:
                fact=f
    print(fact)


#n,testdata=helper.readData("input")
n=int(input())
testdata=[]
for xx in range(n):
    testdata=input()
    if isPrime(testdata):
        print(testdata)
    else:
        factors(testdata)

