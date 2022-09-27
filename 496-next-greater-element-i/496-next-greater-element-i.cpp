class Solution {
public:
    
    int getmax(vector<int> num, int index,int ele)
    {
        for(int i=index;i<num.size();i++)
        {
            if(ele<num[i])
            {
                return num[i];
            }
        }
        
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    int max=getmax(nums2,j,nums2[j]);
                    ans.push_back(max);
                }
            }
        }
        
        return ans;
        
    }
};