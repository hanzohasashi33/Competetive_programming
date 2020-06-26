# Write your code here
from collections import defaultdict
n = int(input())
string = input()
dict = defaultdict(int)

for i in string :
    if i in dict :
        dict[i] += 1
    else :
        dict[i] = 1

if dict['a'] >= 1 and dict['e'] >= 1 and dict['i'] >= 1 and dict['o'] >= 1 and dict['u'] >= 1 :
    print("YES")
else :
    print("NO")
