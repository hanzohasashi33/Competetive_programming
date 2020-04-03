class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = nums[0];
        int maxendinghere = nums[0];
        int n = nums.size();
        
        for(int i = 1;i < n;i++)
        {
            maxendinghere = max(nums[i],maxendinghere + nums[i]);
            maxsofar = max(maxsofar,maxendinghere);
        }
        
        return maxsofar;
    }
};
