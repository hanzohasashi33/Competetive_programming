test = int(input())
while test > 0 :
  n,t = [int(x) for x in input().split()]
  q = input()
  q = list(q)
  i = 0
  while(i < t) :
    for j in range(n-1) :
      if q[j] == 'G' and q[j+1] == 'L' :
        q[j],q[j+i] = q[j+1],q[j]
    i += 1
  print(len(q))
  print(''.join(q))
  test -= 1

 '''
 for _ in range(int(input())):
    n,t = map(int,input().split())
    s = input()
    for i in range(t):
        s= s.replace("GL","LG")
    print(n)
    print(s)
 '''
