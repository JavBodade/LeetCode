class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n=nums.size();
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                count++;
            }
        }
        
        int j=0;
        int k=nums.size()-1;
        
       while(j<k)
       {
              if(nums[j]==val && nums[k]!=val)
             {
               swap(nums[j],nums[k]);
             }
          
           
          if(nums[k]==val)
          {
              k--;
          }
          if(nums[j]!=val)
          {
              j++;
          }
           
        
          
       }
        
        return nums.size()-count;
        
    }
};