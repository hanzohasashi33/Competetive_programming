class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        
        return False if x < 0 else x == int(str(x)[::-1])
