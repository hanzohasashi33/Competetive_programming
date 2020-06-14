if __name__ == "__main__":
    x,y = map(int,input().split())
    flag = 0
    for i in range(x + 1) :
        if i * 4 + (x - i) * 2 == y :
            print("Yes")
            flag = 1
            break 

    if flag == 0 :
        print("No")