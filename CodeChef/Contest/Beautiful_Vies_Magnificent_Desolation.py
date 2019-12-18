# cook your code here
t = int(raw_input())
for k in range(t):
  arr = map(int, raw_input().split())
  n=arr[0]
  d=arr[1]
  l=[]
  max = 0
  for i in range(n):
    name = str(raw_input())
    l.append(name)
  i=0
  while(i<=n-d):
    if(len(set(l[i:i+d]))>max):
      max = len(set(l[i:i+d]))
    i+=1
  print(max)
