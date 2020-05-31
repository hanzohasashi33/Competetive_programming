import unittest
from week1_4 import number

class TestSum(unittest.TestCase) :
    def testcase1(self) :
        n = 10
        pos = 3
        result = number(n,pos)
        self.assertEqual(result,5)

    def testcase2(self) :
        n = 7
        pos = 7
        result = number(n,pos)
        self.assertEqual(result,6)

    def testcase3(self) :
        n = 8
        pos = 8
        result = number(n,pos)
        self.assertEqual(result,8)
    



if __name__ == "__main__":
    unittest.main()
