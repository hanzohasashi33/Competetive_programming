# https://practice.geeksforgeeks.org/problems/remove-leading-zeros-from-an-ip-address/0

t = int(input())
for i in range(t):
    s = str(input())
    l = s.split('.')
    l2 = [int(x) for x in l]
    l3 = [str(x) for x in l2]
    s2 = '.'.join(l3)
    print(s2)
