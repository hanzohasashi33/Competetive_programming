print(sum(x ** x for x in range(1, int(input())+1)) % 10000000000)
from functools import reduce
print(reduce(lambda x, y: x + y**y, range(1, int(input())+1), 0)  % 10000000000)