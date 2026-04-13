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
void preorder(TreeNode* root,int path,int &ans){
    if(!root->left && !root->right){
        ans+=path;
        return;
    }
    if(root->left)preorder(root->left,(path*10)+root->left->val,ans);
    if(root->right)preorder(root->right,(path*10)+root->right->val,ans);
}
    int sumNumbers(TreeNode* root) {
        
        int ans=0;
        preorder(root,root->val,ans);
        return ans;
    }
};