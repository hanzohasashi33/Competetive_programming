test = int(input())
while test > 0 :
    coaches = input()
    coach = []
    for i in coaches :
        coach.append(int(i))
    coach.sort()
    #print (coach)
    i = 0
    for i in range(0,len(coach)-1) :
        if (coach[i]) + 1 != (coach[i+1]) :
            break
        else :
            i += 1
        
    #print (i)
    if i == (len(coach) -1) :
        print ("YES")
    else :
        print ("NO")
    test -= 1
