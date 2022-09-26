class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        nums.clear();
        for(auto x:mp)
        {
            if(x.second>=2)
            {
                for(int i=0;i<2;i++)
                {
                    nums.push_back(x.first);
                }
            }
            else
            {
                nums.push_back(x.first);
            }
        }
        sort(nums.begin(),nums.end());
        
        return nums.size();
        
    }
};