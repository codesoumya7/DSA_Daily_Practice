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
    /*vector<int> postorderTraversal(TreeNode* root) {
        vector<int> arr;
        postOrder(root,arr);
        return arr;
        
    }
    void postOrder(TreeNode* root,vector<int> &arr){
        if(root==NULL){
            return ;
        }
        postOrder(root->left,arr);
        postOrder(root->right,arr);
        arr.push_back(root->val);

    }*/
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        stack<TreeNode*> st1,st2;
        if(root==NULL){
            return vec;
        }
        st1.push(root);
    
        while(!st1.empty()){
            root=st1.top();
            st2.push(root);
            st1.pop();
            if(root->left!=NULL){
                st1.push(root->left);
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
        }
        while(!st2.empty()){
            root=st2.top();
            vec.push_back(root->val);
            st2.pop();
            
        }
        return vec;
        

    }
};