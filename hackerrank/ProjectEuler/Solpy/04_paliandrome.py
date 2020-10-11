#!/usr/bin/python3
def isPaliandrome(x):
    if x[::-1]==x:
        return True
    else:
        return False
def isMultiple(x):
    x=int(x)
    for i in range(100,1000):
        if ( (x%i==0) and (x/i)<=999 and (x/i)>99 ):
            return True
    return False

def nextPalandrom(x):
    x_int=int(x)
    x_new=x_int-1
    while(True):
        if str(x_new)[::-1]==str(x_new):
            return str(x_new)
        else:
            x_new-=1



n=int(input())
testdata=[]
for i in range(n):
    testdata.append(input())

for i in range(n):
    if isPaliandrome(testdata[i]) and isMultiple(testdata[i]):
            print(testdata[i])
    else:
        x_new=nextPalandrom(testdata[i])
        while(True):
            if isMultiple(x_new):
                print(x_new)
                break
            else:
                x_new=nextPalandrom(x_new)


