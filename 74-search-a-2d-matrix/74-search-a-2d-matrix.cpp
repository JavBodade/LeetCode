class Solution {
public:
    bool binarySearch(vector<int> arr,int target)
    {
        int low=0;
        int high=arr.size()-1;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                return true;
            }
            else if(arr[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++)
        {
            vector<int> ans;
            for(int j=0;j<matrix[i].size();j++)
            {
                ans.push_back(matrix[i][j]);
            }
            if(binarySearch(ans,target))
            {
                return true;
            }
        }
        
        return false;
        
    }
};