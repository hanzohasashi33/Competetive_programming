#!/usr/bin/python
#import ipdb
#import helper

def isPalindrome(x):
    x=str(x)    
    if x[::-1]==x:
            return True
    else:
        return False

def nextPalindrom(x):
    x_int=x
    x_new=x_int-1
    while(True):
        if str(x_new)[::-1]==str(x_new):
            return x_new
        else:
            x_new-=1
num=int(input())
n=num
#ipdb.set_trace()
pal={}
while(n>0):
    if isPalindrome(n):
        pal.setdefault(n,0)
    n=nextPalindrom(n)
max_val=0
max_cout=0
#ipdb.set_trace()
for n in range(1,num+1):
    c=0
    while (not isPalindrome(n)) and c<60 and n<=num:
        x=str(n)
        n_rev=int(x[::-1])
        n=n+n_rev
        c+=1
    if isPalindrome(n) and n<=num:
        pal[n]+=1
        if pal[n]>max_cout:
            max_cout=pal[n]
            max_val=n
print(str(max_val)+" "+str(max_cout))
