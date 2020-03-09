test = int(input())
while test > 0 :
    str1 = input()
    str1 = list(str1)
    l = []
    l.append(str1[0])
    for i in range(1,len(str1)) :
        if str1[i] != l[-1] :
            l.append(str1[i])
    
    print(''.join(map(str,l)))  
    test -= 1 
