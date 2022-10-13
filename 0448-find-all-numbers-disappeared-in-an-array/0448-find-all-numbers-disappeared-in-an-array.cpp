class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
      
        map<int,bool> mp;
        
        vector<int> ans;
        for(int i=1;i<=nums.size();i++)
        {
            mp[i]=false;
        }
        
        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]=true;
        }
        
        for(auto x:mp)
        {
            cout<<x.first<<" -> "<<x.second<<endl;
            if(x.second == false)
            {
                ans.push_back(x.first);
            }
        }
        
        
        
        return ans;
        
        
    }
};