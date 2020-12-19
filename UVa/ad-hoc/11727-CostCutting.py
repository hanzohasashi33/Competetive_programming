if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        l = list(map(int,input().split()))
        l.sort()
        print("Case {}: {}".format(i+1,l[1]))
        
