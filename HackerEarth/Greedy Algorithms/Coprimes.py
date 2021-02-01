# Write your code here
def __gcd(a, b):  
    if (a == 0 or b == 0): return 0
    if (a == b): return a 
    if (a > b):  
        return __gcd(a - b, b) 
              
    return __gcd(a, b - a) 
  
# Function to check and print if  
# two numbers are co-prime or not  
def coprime(a, b): 
      
    if ( __gcd(a, b) == 1): 
        return True
    else: 
        return False


n = int(input())
for i in range(n-2,-1,-1):
    if coprime(i,n):
        print(i)
        break
