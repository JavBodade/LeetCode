class Solution {
public:
    int trap(vector<int>& height) {
        
        vector<int> left;
        vector<int> right;
        
        left.push_back(height[0]);
        right.push_back(height[height.size()-1]);
        
        for(int i=1;i<height.size();i++)
        {
            int ele=max(left[i-1],height[i]);
            left.push_back(ele);
        }
        int index=0;
        for(int i=height.size()-2;i>=0;i--)
        {
            int ele=max(right[index],height[i]);
            right.push_back(ele);
            index++;
        }
        
       
        int res=0;
        reverse(right.begin(),right.end());
         for(int i=0;i<right.size();i++)
        {
            cout<<right[i]<<" ";
        }
          
        for(int i=0;i<height.size();i++)
        {
            res+=min(left[i],right[i])-height[i];
        }
        
        return res;
    }
};