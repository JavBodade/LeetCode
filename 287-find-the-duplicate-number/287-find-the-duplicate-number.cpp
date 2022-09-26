class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
           
      sort(nums.begin(),nums.end());
     
          int i=0;
        
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                return nums[i];
            }
            
            i++;
            
        }
        
        return 0;
    
        
    }
};