class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int k = 0;
        int n = nums.size();
        
        for(int i = 0;i < n;i++)
        {
            if(nums[i] != 0)
            {
                nums[k++] = nums[i];
            }
        }
        
        for(int i = k;i < n;i++)
        {
            nums[k++] = 0;
        }
    }
};
