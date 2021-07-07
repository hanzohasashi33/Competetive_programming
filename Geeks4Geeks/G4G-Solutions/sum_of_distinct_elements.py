# https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements/0/



def sum_of_distinct(l):
    return sum(set(l))
    
t = int(input())
for i in range(t):
    n = int(input())
    s = str(input())
    l1 = s.split()
    l = [int(x) for x in l1]
    print(sum_of_distinct(l))
