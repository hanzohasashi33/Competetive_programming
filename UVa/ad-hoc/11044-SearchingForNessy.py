if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        x,y = map(int,input().split())
        print((x//3) * (y//3))
