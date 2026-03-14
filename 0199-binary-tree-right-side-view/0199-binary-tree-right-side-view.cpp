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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        if(!root)return ans;
        while(!q.empty()){
            int n=q.size();
            vector<int>t;
            int s=0;
            for(int i=1;i<=n;i++){
               TreeNode* x=q.front();
                q.pop();
                t.push_back(x->val);
                s++;
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
            ans.push_back(t[s-1]);
        }
        return ans;
    }
};