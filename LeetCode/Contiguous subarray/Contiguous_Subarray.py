class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        nums=[nums[i] if nums[i]==1 else -1 for i in range(len(nums))]
        
        max_len=0
        cur_sum=0
        mapp={0:-1}
        
        for idx,v in enumerate(nums):
            cur_sum+=v
            if cur_sum in mapp:
                max_len=max(max_len,idx-mapp[cur_sum])
            else:
                mapp[cur_sum]=idx    
        
        return max_len
