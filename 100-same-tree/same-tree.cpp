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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<string> pi=preorderTraversal(p);
        vector<string> qi=preorderTraversal(q);
        if(pi==qi){
            return true;
        }
        return false;

        
    }
    vector<string> preorderTraversal(TreeNode* root) {
        vector<string> vec;
        preorder(root,vec);
        return vec;
        
    }

    void preorder(TreeNode* root, vector<string>& vec){
        if(root==NULL){
            vec.push_back("NULL");
            return ;
        }

        vec.push_back(to_string(root->val));
        preorder(root->left,vec);
        preorder(root->right,vec);

    }
};