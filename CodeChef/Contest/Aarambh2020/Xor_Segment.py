# Python3 implementation of the approach 
from operator import xor 

# Function to return the XOR of elements 
# from the range [1, n] 
def findXOR(n): 
	mod = n % 4; 

	# If n is a multiple of 4 
	if (mod == 0): 
		return n; 

	# If n % 4 gives remainder 1 
	elif (mod == 1): 
		return 1; 

	# If n % 4 gives remainder 2 
	elif (mod == 2): 
		return n + 1; 

	# If n % 4 gives remainder 3 
	elif (mod == 3): 
		return 0; 

# Function to return the XOR of elements 
# from the range [l, r] 
def findXORFun(l, r): 
	return (xor(findXOR(l - 1) , findXOR(r))); 

# Driver code 
test = int(input())
while test > 0 :
  l,r = map(int,input().split())
  print(findXORFun(l, r)) 
  test -= 1
# This code is contributed by PrinciRaj1992 
