class Solution {
public:
    int minMoves2(vector<int>& nums){ 
        
        sort(nums.begin(),nums.end());
        if(nums.size()%2!=0)
        {
            int mid=nums[nums.size()/2];
            int moves=0;
            for(int i=0;i<nums.size();i++)
            {
                moves+=abs(mid-nums[i]);
                
            }
            
            return moves;
        }
       else{
           
           int mid=(nums[nums.size()/2]+nums[nums.size()/2-1])/2;
           int moves=0;
           
           for(int i=0;i<nums.size();i++)
           {
               moves+=abs(mid-nums[i]);
           }
           
           return moves;
       }
        
    }
};