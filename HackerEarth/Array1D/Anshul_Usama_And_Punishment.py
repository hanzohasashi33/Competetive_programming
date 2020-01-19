# Write your code here
l = [20,30]
count = 0
i = 0
while count < 20 :
    if len(l)%2 == 0 :
        l.append(l[i] * 2)
    else :
        l.append(l[i] * 3)
    i += 1
    count += 1
n = int(input())
max1 = 0
for i in range(n-1) :
    for j in range(i + 1,n) :
        if (abs(l[i] + l[j]) + abs(l[i] - l[j]) > max1) :
            max1 = abs(l[i] + l[j]) + abs(l[i] - l[j])
#print (l)
print (max1)
