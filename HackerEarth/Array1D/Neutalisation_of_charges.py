n = int(input())
s = input()

l = list(s)
new = []
new.append(l[0])
for i in range(1,len(l)) :
    new.append(l[i])
    try :
        if new[-1] and new[-2] :
            if new[-1] == new[-2] :
                new.pop()
                new.pop()
    except :
        pass 

print (len(new))
print(''.join(new))
