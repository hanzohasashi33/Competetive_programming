# Write your code here
from collections import defaultdict

test = int(input())
while test > 0 :
    string = input()
    n = len(string)
    dict = defaultdict(int)
    for i in string :
        if i in dict :
            dict[i] += 1
        else :
            dict[i] = 1
    minimum = min(dict['r'],dict['u'],dict['b'],dict['y'])
    print(minimum)
    test -= 1 
