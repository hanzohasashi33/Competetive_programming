# Write your code here
n,m = [int(x) for x in input().split()]
a = list(map(int,input().split()))
b = list(map(int,input().split()))
a.sort()
b.sort()
count = 0
i,j = 0,m-1
while(i<n and j>=0):
      if(a[i] < b[j]):
        count += abs(a[i]-b[j])
      i+=1;
      j-=1;
print(count)
