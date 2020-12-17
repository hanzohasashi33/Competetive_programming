#!/usr/bin/python
#import ipdb
#
#def is_anagram(x,y):
#    x=''.join(sorted(str(x)))
#    y=''.join(sorted(str(y)))
#    if x==y:
#        return True
#    else:
#        return False
#def max_val(anagram):
#    max_val=1;
#    ans=[]
#    for key in anagram:
#        if len(anagram[key])>=max_val:
#            if max_val<len(anagram[key]):
#                ans.clear()
#                max_val=len(anagram[key])
#            for x in anagram[key]:
#                ans.append(x)
#    sorted(ans)
#    return(ans[-1])
#
#
#
#
#ans=100
#n=9
#square={}
#while(True):
#    n+=1
#    ans=n**2
#    l=len(str(ans))
#    if l>13:
#        break;
#    square.setdefault(l,[])
#    square[l].append(ans)
#anagram={}
#for l in square:
#    anagram.setdefault(l,{})
#    for x in square[l]:
#        key=''.join(sorted(str(x)))
#        anagram[l].setdefault(key,[])
#        anagram[l][key].append(x)
#
#for x in square:
#    print(str(x)+" "+str(max_val(anagram[x])))
ans={}
ans[3] = 961
ans[4] = 9216
ans[5] = 96100
ans[6] = 501264
ans[7] = 9610000
ans[8] = 73462041
ans[9] = 923187456
ans[10]= 9814072356
ans[11]= 98310467025
ans[12]= 985203145476
ans[13]= 9831140766225
n=input()
n=int(n)
print(ans[n])
