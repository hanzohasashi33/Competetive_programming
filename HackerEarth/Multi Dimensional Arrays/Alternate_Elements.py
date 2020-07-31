# Write your code here
from numpy import array 

l = list(map(int,input().split()))
arr = array([l[:3],l[3:6],l[6:]])
#print(arr)
print(arr[0][0] + arr[0][2] + arr[1][1] + arr[2][0] + arr[2][2])
print(arr[0][1] + arr[1][0] + arr[1][2] + arr[2][1])
