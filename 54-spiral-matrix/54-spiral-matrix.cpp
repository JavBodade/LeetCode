class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row_strt=0;
int row_end=matrix.size()-1;
int col_strt=0;
int col_end=matrix[0].size()-1;
vector<int>ans;
while(row_strt<=row_end && col_strt<=col_end)
{
for(int i=col_strt;i<=col_end;i++)
{
ans.push_back(matrix[row_strt][i]);
}
row_strt++;
for(int i=row_strt;i<=row_end;i++)
{
ans.push_back(matrix[i][col_end]);
}
col_end--;
if(row_strt>row_end || col_strt>col_end)
{
break;
}
for(int i=col_end;i>=col_strt;i--)
{
ans.push_back(matrix[row_end][i]);
}
row_end--;
for(int i=row_end;i>=row_strt;i--)
{
ans.push_back(matrix[i][col_strt]);
}
col_strt++;
}
return ans;

        
    }
};