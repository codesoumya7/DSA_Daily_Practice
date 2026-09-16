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
    int diameterOfBinaryTree(TreeNode* root) {
        /*int ans = 0;
        maxDepth(root, ans);
        return ans;
    }

    int maxDepth(TreeNode* root, int &ans) {
        if(root == NULL)
            return 0;

        int lh = maxDepth(root->left, ans);
        int rh = maxDepth(root->right, ans);

        ans = max(ans, lh + rh);

        return 1 + max(lh, rh);*/

   
        if(root == NULL)
            return 0;

        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);

        int maxi = lh + rh;

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        return max(maxi, max(leftDiameter, rightDiameter));
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