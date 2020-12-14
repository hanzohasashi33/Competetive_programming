initial = True
while(True):
    try :
        x = input()
    except EOFError:
        break

    output = []
    for i in range(len(x)):
        if initial and x[i] == '"':
            output.append("``")
            initial = False
        elif initial == False and x[i] == '"':
            output.append("''")
            initial = True 
        else:
            output.append(x[i])
    
    print("".join(output))
    print(x)
    #x = input()
