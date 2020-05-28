import unittest
from week1_2 import sock_days

class TestSum(unittest.TestCase) :
    def testsame(self) :
        """
        Test to check if n == m 
        """
        n = 2
        m = 2
        result = sock_days(n,m)
        self.assertEqual(result,3)

    def testfactor(self) :
        """
        Test to check if n%m == 0 and n != m
        """
        n = 9
        m = 3
        result = sock_days(n,m)
        self.assertEqual(result,13)

    def testless(self) :
        """
        Test to check when n < m 
        """
        n = 9
        m = 16
        result = sock_days(n,m)
        self.assertEqual(result,9)

    def testnotfactor(self) :
        """
        Test to check if n%m == 0 and n != m
        """
        n = 9
        m = 4
        result = sock_days(n,m)
        self.assertEqual(result,11)



if __name__ == "__main__":
    unittest.main()
