if __name__ == "__main__":
    while True:
        try:
            n = input()
        except EOFError:
            break


        normal = int(n[:2]) * 60 * 60 * 100 + int(n[2:4]) * 60 * 100 + int(n[4:6]) * 100 + int(n[6:])
        decimalT = (normal * 10 * 100 * 100 * 100)//(24*60*60*100)
        print(str(decimalT).zfill(7))
