import numpy as np

test = int(input()) 
for i in range(1, test + 1):
    n = int(input())
    arr = [];
    rows = 0;
    columns = 0;
    for j in range(1, n + 1):
        tmp = [int(s) for s in input().split(" ")]
        if len(tmp) != len(set(tmp)):
            rows += 1;
        arr.append(tmp)
    matrix = np.array(arr);
    trace = matrix.diagonal().sum();
    transpose = matrix.transpose();
    for j in range(0, n):
        if len(transpose[j]) != len(set(transpose[j])):
            columns += 1;
    print("Case #{}: {} {} {}".format(i, trace, rows, columns))
