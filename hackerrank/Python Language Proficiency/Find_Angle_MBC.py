# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
AB = float(input())
BC = float(input())

print(str(int(round(math.degrees(math.atan2(AB, BC)))))+'°')
