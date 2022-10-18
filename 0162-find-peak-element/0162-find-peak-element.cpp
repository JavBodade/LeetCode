class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            int j=(i+1)%nums.size();
            int k=(i-1)%nums.size();
            if(nums[i] > nums[j] && nums[k] < nums[i])
            {
                return i;
            }
        }
        
        return 0;
    }
};