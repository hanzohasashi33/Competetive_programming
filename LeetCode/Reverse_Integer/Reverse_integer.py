#brute force
class Solution:
    def reverse(self, x: int) -> int:
        if x >= 2**31 - 1 or x < -2**31 :
            return 0
        else :
            reversed = 0
            if x > 0 :
                while x > 0 :
                    reversed *= 10
                    reversed += int(x%10)
                    x = int(x/10)
                if reversed > 2**31 -1 :
                    return 0
                else :
                    return reversed
            else :
                x = -x
                while x > 0 :
                    reversed *= 10
                    reversed += int(x%10)
                    x = int(x/10)
                if -reversed < -2**31 :
                    return 0
                else :
                    return -reversed
            
            
        
