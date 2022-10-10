class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int sum=nums[i];
            ans.push_back(nums[i]);
            while(j<nums.size())
            {
                sum=sum+nums[j];
                j++;
                ans.push_back(sum);
            }
        }
        
        sort(ans.begin(),ans.end());
        int res=0;
        for(int i=left-1;i<right;i++)
        {
           res=(res+ans[i])%1000000007;
        }
        return res%1000000007;
    }
};