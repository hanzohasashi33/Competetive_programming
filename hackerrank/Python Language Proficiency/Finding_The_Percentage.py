if __name__ == '__main__':
    n = int(input(""))
    al =[]
    while(n > 0) :
        l = input().split()
        al.append(l)
        n -= 1
    sum = 0
    name = input("")
    for i in al :
        if i[0] == name :
            for j in range(1,4) :
                sum += float(i[j])
    print("{:.2f}".format(sum/3.00))
