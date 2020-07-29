class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        result = []
        x = [i for i in nums[:n]]
        y = [i for i in nums[n:]]
        print(x,y)
        for i in range(n) :
            result.append(x[i])
            result.append(y[i])
        return result
        
