if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        x = int(input())
        answer = (x * 567)//9 + 7492
        answer *= 235
        answer = answer//47
        answer -= 498
        answer = str(answer)
        print(answer[-2])
