# Write your code here
n = int(input())
l = list(map(int,input().split()))
odd = []
even = []
for i in range(n) :
    if(l[i] % 2 == 0) :
        even.append(l[i])
    else :
        odd.append(l[i])

odd.sort()
even.sort()

for i in even :
    print(i,end = " ")
print(sum(even),end = " ")


for i in odd :
    print(i,end = " ")
print(sum(odd),end = " ")
