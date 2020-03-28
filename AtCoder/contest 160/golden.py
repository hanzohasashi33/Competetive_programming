x = int(input())
happy = 0
while x >= 500 :
    happy += 1000 * int(x/500)
    x = x%500


while x >= 5 :
    happy += 5 * int(x/5)
    x = x%5


print(happy)
