class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector<int> row;
        vector<int> col;
        
       
        for(int i=0;i<matrix.size();i++)
        {
            row.push_back(1);
            
        }
        
        for(int i=0;i<matrix[0].size();i++)
        {
            col.push_back(1);
        }
        
        for(int i=0;i<matrix.size();i++)
        {
           
            for(int j=0;j<matrix[i].size();j++)
            {
                 
                if(matrix[i][j]==0)
                {
                    row[i]=0;
                    col[j]=0;
                }
                
            }
        }
        
      
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(row[i]==1 && col[j]==1)
                {
                    
                    continue;
                }
                else
                {
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};