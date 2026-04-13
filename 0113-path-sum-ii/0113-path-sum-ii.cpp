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
void preorder(TreeNode* root, int ts,vector<vector<int>>&ps,int sum,vector<int> path){
    if(!root->left && !root->right){
        if(sum==ts)ps.push_back(path);
        return;
    }
    if(root->left){
        path.push_back(root->left->val);
        preorder(root->left,ts,ps,sum+root->left->val,path);
        path.pop_back();
    }
    if(root->right){
        path.push_back(root->right->val);
        preorder(root->right,ts,ps,sum+root->right->val,path);
        path.pop_back();
    }
}
    vector<vector<int>> pathSum(TreeNode* root, int ts) {
        vector<vector<int>>ps;
        vector<int>p;
        if(!root)return ps;
        p.push_back(root->val);
        preorder(root,ts,ps,root->val,p);
        return ps;
    }
};