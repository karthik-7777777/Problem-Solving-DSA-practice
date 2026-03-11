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
void dfs(TreeNode* root,vector<int>&depths,int lev){
    if(!root){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        depths.push_back(lev);
        return;
    }
    dfs(root->left,depths,lev+1);
    dfs(root->right,depths,lev+1);
}
    int minDepth(TreeNode* root) {
        vector<int>depths;
        int lev=1;
        dfs(root,depths,lev);
        int ans=*min_element(depths.begin(),depths.end());
        return ans;
    }
};