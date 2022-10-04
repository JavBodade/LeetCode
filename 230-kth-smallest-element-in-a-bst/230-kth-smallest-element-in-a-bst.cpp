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
    
    void preOrder(vector<int>& arr,TreeNode* root)
    {
        
        if(root==NULL)
        {
            return ;
        }
        
        arr.push_back(root->val);
        preOrder(arr,root->left);
        
        preOrder(arr,root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> arr;
        
        preOrder(arr,root);
        
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
        
        
    }
};