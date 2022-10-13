class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<operations.size();i++)
        {
            int oldvalue=operations[i][0];
            int newvalue=operations[i][1];
            
            int index=mp[oldvalue];
            // cout<<index<<" "<<oldvalue<<" "<<newvalue<<endl;
            nums[index]=newvalue;
            mp[newvalue]=index;
            
        }
        
        return nums;
        
    }
};