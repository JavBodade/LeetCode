class Solution {
public:
    
    bool check(vector<int>arr,int l,int r)
    {
        vector<int> arr2;
        
        for(int i=l;i<=r;i++)
        {
            arr2.push_back(arr[i]);
        }
        sort(arr2.begin(),arr2.end());
        
        int ap=arr2[1]-arr2[0];
        
        for(int i=0;i<arr2.size()-1;i++)
        {
            if(arr2[i+1]-arr2[i]!=ap)
            {
                return false;
            }

        }
        
        return true;

    }
    
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        
        vector<bool> ans;
        
        for(int i=0;i<l.size();i++)
        {
            bool val=check(nums,l[i],r[i]);
            
            ans.push_back(val);
            
        }
        
        return ans;
    }
};