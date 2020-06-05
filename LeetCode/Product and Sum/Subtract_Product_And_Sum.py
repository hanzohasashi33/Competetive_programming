class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        x = n
        add = 0
        mul = 1
        while x > 0 :
            add += x%10
            mul *= x%10
            x = x//10
        return mul - add
