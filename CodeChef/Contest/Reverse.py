n = input()
lines = []
for i in range(n):
    string = raw_input("").replace(",", '').replace(";", "").replace("'", '').replace('.', '').replace(':', '').strip(" ").split(" ")
    string.reverse()
    lines.append(string)
for i in reversed(lines):
    print(" ".join(i))
