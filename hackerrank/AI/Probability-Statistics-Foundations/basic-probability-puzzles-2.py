probability = 1/6
values = 6
result = 0
for i in range(1, values + 1):
    for j in range(1, values + 1):
        if i != j and (i + j) == 6:
            result += probability ** 2
print (result)