class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                ans.push_back(matrix[matrix.size()-j-1][i]);
            }
        }
        
        int index=0;
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                matrix[i][j]=ans[index++];
            }
        }
    }
};