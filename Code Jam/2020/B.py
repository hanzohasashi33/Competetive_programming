test = int(input())
for x in range(test) :
    paranthesisnumber = input()
    output = ""
    n = len(paranthesisnumber)
    if(n == 1) :
        output = "(" * int(paranthesisnumber) + paranthesisnumber +")" * int(paranthesisnumber)
    
    else :
        for i in range(n - 1) :
            if i == 0 :
                output += "(" * int(paranthesisnumber[i])
        
            if(int(paranthesisnumber[i]) > int(paranthesisnumber[i+1])) :
                output += paranthesisnumber[i]
                output += ")" * (int(paranthesisnumber[i]) - int(paranthesisnumber[i+1]))

            if(int(paranthesisnumber[i]) < int(paranthesisnumber[i + 1])) :
                output += paranthesisnumber[i]
                output += "(" * (int(paranthesisnumber[i+1]) - int(paranthesisnumber[i]))
            
            if(int(paranthesisnumber[i]) == int(paranthesisnumber[i + 1])) :
                output += paranthesisnumber[i]
            
        output += paranthesisnumber[n - 1]
        output += int(paranthesisnumber[n -1]) * ")"
    
    print("Case #" + str(x+1) + ":" + " " + str(output))
