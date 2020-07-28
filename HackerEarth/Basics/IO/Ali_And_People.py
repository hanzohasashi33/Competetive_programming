# Write your code here
str1 = input()
vowels = ["A","E","I","O","U","Y"]
a = int(str1[1]) + int(str1[0])
b = int(str1[3]) + int(str1[4])
c = int(str1[4]) + int(str1[5])
d = int(str1[7]) + int(str1[8])

if(a%2 == 0 and b%2 == 0 and c%2 == 0 and d%2 == 0 and str1[2] not in vowels) :
    print("valid")
else :
    print("invalid")
