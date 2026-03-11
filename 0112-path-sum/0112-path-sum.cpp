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
void dfs(TreeNode* root, int targetSum,int sum,bool &chk){
    if(!root)return;
    if(root->left==NULL && root->right==NULL){
        if(sum+root->val==targetSum){
            chk=true;
            return;
        }
    }
    dfs(root->left,targetSum,sum+root->val,chk);
    dfs(root->right,targetSum,sum+root->val,chk);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool chk=false;
        if(!root)return chk;
        dfs(root,targetSum,0,chk);
        return chk;
    }
};