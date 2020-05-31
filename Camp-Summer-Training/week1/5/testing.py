import unittest
from week1_5 import evenness

class TestSum(unittest.TestCase) :
    def testcase1(self) :
        n = 5
        l = [2,4,7,8,10]
        result = evenness(l,n)
        self.assertEqual(result,3)

    def testcase2(self) :
        n = 4
        l = [1,2,1,1]
        result = evenness(l,n)
        self.assertEqual(result,2)

    """
    def testcase3(self) :
        n = 8
        pos = 8
        result = number(n,pos)
        self.assertEqual(result,8)
    """



if __name__ == "__main__":
    unittest.main()