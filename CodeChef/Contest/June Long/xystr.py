test = int(input())
while test > 0 :
    string = input()
    count = 0
    i = 0
    n = len(string)
    while i < n - 1:
        if string[i] == 'x' and string[i + 1] == 'y' :
            count += 1
            i += 2
        elif string[i] == 'y' and string[i + 1] == 'x' :
            count += 1
            i += 2
        else :
            i += 1
    print(count)
    test -= 1