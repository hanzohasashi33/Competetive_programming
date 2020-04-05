import numpy as np 

test = int(input())
for x in range(test) :
    n = int(input())
    schedule = []
    for i in range(n) :
        schedule.append([int(time) for time in input().split()])
    

    total_min = 24 * 60
    cameron = "0" * (24 * 60)
    jamie = "0" * (24 * 60)

    reschedule = ""

    for activity in schedule :
        if "1" not in cameron[activity[0] : activity[1]] :
            cameron = cameron[:activity[0]] + (activity[1] - activity[0]) * "1" + cameron[activity[1]:]
            reschedule += "C"
    
        elif "1" not in jamie[activity[0] : activity[1]] :
            jamie = jamie[:activity[0]] + (activity[1] - activity[0]) * "1" + jamie[activity[1] : ]
            reschedule += "J"
        
        else :
            reschedule = "IMPOSSIBLE"
            break 

    
    print("Case #" + str(x + 1) + ": " + reschedule)
