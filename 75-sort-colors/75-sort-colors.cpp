class Solution {
public:
    void sortColors(vector<int>& nums) {
        
          int zerocount=0;
        int onecount=0;
        int twocount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zerocount++;
            }
            if(nums[i]==1)
            {
                onecount++;
            }
            if(nums[i]==2)
            {
                twocount++;
            }
        }
        
        nums.clear();
        int index=0;
        while(index!=zerocount)
        {
            nums.push_back(0);
            index++;
    }
        index=0;
         while(index!=onecount)
        {
            nums.push_back(1);
             index++;
        } 
        index=0;
        while(index!=twocount)
        {
            nums.push_back(2);
            index++;
    }
        
        
    }
};