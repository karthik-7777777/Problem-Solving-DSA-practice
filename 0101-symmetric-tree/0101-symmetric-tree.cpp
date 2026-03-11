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
void dfs1(TreeNode* root,vector<int>&l){
    if(!root){
        l.push_back(-101);
        return;
    }
    l.push_back(root->val);
    dfs1(root->left,l);
    dfs1(root->right,l);
}
void dfs2(TreeNode* root,vector<int>&r){
    if(!root){
        r.push_back(-101);
        return;
    }
    r.push_back(root->val);
    dfs2(root->right,r);
    dfs2(root->left,r);
}
    bool isSymmetric(TreeNode* root) {
        vector<int>r,l;
        dfs1(root->left,l);
        dfs2(root->right,r);
        if(l.size()!=r.size())return false;
        for(int i=0;i<l.size();i++){
            if(l[i]!=r[i])return false;
        }
        return true;
    }
};