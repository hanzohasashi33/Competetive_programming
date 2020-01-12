# Write your code here

'''
import re


mess1 = input()
mess1 = re.sub(r"[^\w\s]", '', mess1)
mess1 = mess1.replace(" ",'')
mess2 = input().replace(" ",'')
mess2 = re.sub(r"[^\w\s]",'', mess2)

if(set(mess1).issubset(set(mess2))==True):
    print ("YES")
else :
    print ("NO")
'''

mess=input()
mesr=input()
mess=mess.lower()
mesr=mesr.lower()

if(set(mesr).issubset(set(mess))==True):
    print("YES")
else:
    print("NO")
