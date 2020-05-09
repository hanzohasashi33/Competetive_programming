def merge_the_tools(string, k):
    # your code goes here
    n = len(string)
    l = [dict.fromkeys(string[0+i:k+i]) for i in range(0, n, k)]
    for i in l :
        print("".join(i))

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
