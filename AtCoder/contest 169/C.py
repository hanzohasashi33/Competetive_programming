import math
from decimal import Decimal, getcontext


A, B = input().split()
print(math.floor(Decimal(A) * Decimal(B)))
