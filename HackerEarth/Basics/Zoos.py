# Write your code here
n = input()
counto = 0
countz = 0
for i in n :
    if i == 'o' :
        counto += 1
    else :
        countz += 1
if counto == 2 * countz :
    print ("Yes")
else :
    print ("No")
