class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int number = 0;
        for(int i = 0;i < n;i++)
        {
            number ^= nums[i];
        }
        return number;
    }
};
