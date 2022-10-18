class Solution {
public:
    
    int reverse(int n)
    {
        int sum=0;
        while(n > 0)
        {
            int rem=n%10;
            sum=sum*10+rem;
            n=n/10;
            
        }
        
        return sum;
    
    }
    int countDistinctIntegers(vector<int>& nums) {
        
        vector<int> arr;
        
        for(int i=0;i<nums.size();i++)
        {
            arr.push_back(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            arr.push_back(reverse(nums[i]));
        }
        map<int,int> mp;
        
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        return mp.size();
        
        
        
        
    }
};