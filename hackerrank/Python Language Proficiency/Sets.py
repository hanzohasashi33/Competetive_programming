def average(array):
    # your code goes here
    s = list(set(array))
    summation = sum(s)
    return (summation/len(s))

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
