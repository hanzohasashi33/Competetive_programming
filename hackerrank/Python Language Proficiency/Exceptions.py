# Enter your code here. Read input from STDIN. Print output to STDOUT
test = input("")
while test > 0 :
    a,b = raw_input("").split(" ")
    try :
        a = int(a)
        b = int(b)
        print (a/b)
    except ZeroDivisionError as e :
        print "Error Code: " + str(e)
    except ValueError as e :
        print "Error Code: " + str(e)
    test -= 1
