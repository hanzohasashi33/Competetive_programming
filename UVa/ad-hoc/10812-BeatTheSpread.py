if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        s,d = map(int,input().split())
        if s < d:
            print("impossible")
        else:
            a,b = 0,0
            a = (s+d)//2
            b = s - a

            if a >= 0 and b >= 0 and a + b == s and abs(a-b) == d:
                print(a,b)  
            else:
                print("impossible")
