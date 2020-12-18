if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        x = int(input())
        dict = {}
        for i in range(x):
            a,b = input().split()
            dict[a] = int(b)
        c = int(input())
        cost = 0
        for j in range(c):
            y = input()
            cost += sum(map(lambda x: dict[x] if x in dict else 0, y))

        print("{0:.2f}$".format(cost/100))
