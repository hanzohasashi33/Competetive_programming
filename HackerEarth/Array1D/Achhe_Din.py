# Write your code here
from collections import Counter
test = int(input())
while test > 0 :
    n = int(input())
    l = input().split()
    rogue = Counter(l)
    a = set(l)
    for i in a :
        if(rogue[i] != 3) :
            print (i)
        
    test -= 1
