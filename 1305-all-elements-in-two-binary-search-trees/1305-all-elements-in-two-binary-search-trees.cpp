/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
   void preOrder(TreeNode* root1,vector<int>& ans)
    {
        
     
        if(root1==NULL)
        {
            return;
        }
       
            ans.push_back(root1->val);
            preOrder(root1->left,ans);
            preOrder(root1->right,ans);
            
       
       
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int> ans;
        preOrder(root1,ans);
        preOrder(root2,ans);
        
       
        sort(ans.begin(),ans.end());
        
        return ans;
        
        
        
    }
};