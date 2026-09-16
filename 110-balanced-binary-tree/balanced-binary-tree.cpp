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
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int right=maxDepth(root->right)+1;
        int left=maxDepth(root->left)+1;
        if(abs(left - right) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
        
        
    }
    int maxDepth(TreeNode* root) {
        TreeNode* node=root;
        if(node==NULL){
            return 0;
        }
        int lh=maxDepth(node->left);
        int rh=maxDepth(node->right);
        return (1+max(lh,rh));
        
    }
    
};