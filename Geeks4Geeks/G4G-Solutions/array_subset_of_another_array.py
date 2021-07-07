# https://practice.geeksforgeeks.org/problems/array-subset-of-another-array/0/

t = int(input())
for _ in range(t):
    l1 =  list (map (int, input().strip().split()))
    m = l1[0]
    n = l1[1]
    arr1 =  set(map (int, input().strip().split()))
    arr2 =  set(map (int, input().strip().split()))
    if (arr2.issubset(arr1)):
        print('Yes')
    else:
        print('No')
