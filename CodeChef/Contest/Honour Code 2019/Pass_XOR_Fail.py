def computeXOR(n) : 
    switch = {  
        0 : n,   
        1 : 1,   
        2: n + 1, 
        3 : 0, 
    } 
    return switch.get( n & 3, "") 
  

l = 0
r = int(input())
print(computeXOR(r) ^ computeXOR(l - 1)) 
