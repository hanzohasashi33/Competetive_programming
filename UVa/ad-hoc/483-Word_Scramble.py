if __name__ == "__main__":
    while True:
        try:
            n = input()
        except:
            break

        n = n.split()
        output = []
        for i in n:
            i = i[::-1]
            output.append(i)
        print(*output)
        # print()
