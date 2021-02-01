# Write your code here
n = input()
newstr = ""


for i in range(len(n)):
        
    if len(n) == 1:
        if n[0] == '?':
            newstr = 'a'
        else:
            newstr = n[0]
        break


    if n[i] == '?': 
        if i == 0:
            if n[i+1] == 'a':
                n = n[:i] + 'b' + n[i+1:]
                newstr += 'b'
            else:
                newstr += 'a'
                n = n[:i] + 'a' + n[i+1:]
        
        elif i == len(n)-1:
            if n[i-1] == 'a':
                newstr += 'b'
                n = n[:i] + 'b' + n[i+1:]
            else:
                newstr += 'a'
                n = n[:i] + 'a' + n[i+1:]
        else:
            if n[i-1] == 'a' or n[i+1] == 'a':
                newstr += 'b'
                n = n[:i] + 'b' + n[i+1:]
            else:
                newstr += 'a'
                n = n[:i] + 'a' + n[i+1:]
    else:
        newstr += n[i]
print(newstr)
