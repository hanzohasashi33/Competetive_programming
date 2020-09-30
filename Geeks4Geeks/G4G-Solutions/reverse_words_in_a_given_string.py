# https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0

t = int(input())
for i in range(t):
    s = str(input())
    l=[]
    l = s.split('.')
    l.reverse()
    print('.'.join(l))
