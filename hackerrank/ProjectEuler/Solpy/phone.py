d = {}
for i in range(int(input())):
    x = input().split()
    d[x[0]] = x[1]
_ = True
try:
    while _ == True:
        name = input()
        if len(name) > 0:
            if name in d.keys():
                print(name, "=", d[name], sep="")
            else : print("Not found")   
        else:
            _ = False
except EOFError:
    pass