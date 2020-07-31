N = int(input())
data = list(input().split())

result = ""
for i in data :
    result += i[-1]

if result[-1] == '0' :
    print("Yes")
else :
    print("No")
