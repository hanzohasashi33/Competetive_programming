if __name__ == "__main__":

    while True:
        try:
            h,u,d,f = map(int,input().split())
        except Exception as e:
            break

        if h == 0:
            break 
        
        # print(h,u,d,f)
        current = 0
        day = 1
        reced = f/100 * u 
        failure_flag = 0
        while current <= h:
            current += u 

            if current > h:
                print("success on day {}".format(day))
                break 

            current -= d

            if u > 0:
                u -= reced 

            if current < 0:
                failure_flag = 1
                print("failure on day {}".format(day))
                break 
            
            # print(current,u)

            day += 1
