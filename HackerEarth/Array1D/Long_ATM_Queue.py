# Write your code here
n = int(input())
arr = list(map(int,input().split()))
group = 0
for i in range(n-1) :
    if arr[i] > arr[i + 1] :
        group += 1
        
print(group + 1)
