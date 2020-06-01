# Write your code here
string = input()
dict = {}

maximum = 0

for i in string :
    if i in dict :
        dict[i] += 1
        if dict[i] > maximum :
            maximum = dict[i]
    else :
        dict[i] = 1


for key,value in sorted(dict.items()) :
    if value == maximum :
        print(str(key),str(value))
        break 

#print(dict) 
