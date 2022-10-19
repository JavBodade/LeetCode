class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
          if(nums.size()==1)
        {
            return nums[nums.size()-1];
        }
        
        int maxcount=0;
        int currcount=0;
        int maxnegcount=INT_MIN;
        int negative=0;
        for(int i=0;i<nums.size();i++)
        {
            
            negative=nums[i];
            if(maxnegcount<negative)
            {
                maxnegcount=negative;
            }
            if(negative>=0)
            {
                negative=0;
            }
            
            currcount+=nums[i];
             if(currcount<0)
            {
                currcount=0;
            }
             if(maxcount<currcount)
            {
                maxcount=currcount;
            }
        }
        
       if(maxcount==0)
       {
           
           return maxnegcount;
        }
        else
        {
            return maxcount;
        }
    }
};