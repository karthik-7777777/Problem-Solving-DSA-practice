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
void inorder(TreeNode* root,vector<string>&arr,string n){
    if(!root)return;
    n+=root->val+'0';
    if(!root->left && !root->right){
        arr.push_back(n);
        return;
    }
    inorder(root->left,arr,n);
    inorder(root->right,arr,n);
}
    int sumRootToLeaf(TreeNode* root) {
        int ans=0;
        vector<string>arr;
        inorder(root,arr,"");
        for(auto i:arr){
            ans+=stoi(i,nullptr,2);
        }
        return ans;
    }
};