/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int data) {
        if(root && root->val == data)
            return root;
        else if(root && root->val > data )
            return searchBST(root->left, data);
        else if(root && root->val < data)
            return searchBST(root->right, data);
        
     return NULL;   
    }
};