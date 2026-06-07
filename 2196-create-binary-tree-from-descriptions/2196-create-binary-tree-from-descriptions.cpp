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
TreeNode* fun(unordered_map<int,pair<int,int>>& nodes,vector<vector<int>>& des,int val){
    if(nodes.find(val)==nodes.end()){
        TreeNode* nn=new TreeNode(val);
        return nn;
    }
    TreeNode* nn=new TreeNode(val);
    if(nodes[val].first != 0){
        nn->left=fun(nodes,des,nodes[val].first);
    }
    if(nodes[val].second != 0){
        nn->right=fun(nodes,des,nodes[val].second);
    }
    return nn;
}
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        unordered_set<int>s1;
        unordered_map<int,int>mp;
        unordered_map<int,pair<int,int>>nodes;
        for(auto it:des){
            if(it[2]==1){
                nodes[it[0]].first=it[1];
            }
            else if(it[2]==0){
                nodes[it[0]].second=it[1];
            }
        }
        int rt;
        for(auto i:des){
            s1.insert(i[0]);
            mp[i[1]]++;
        }
        for(auto i:s1){
            if(mp.find(i)==mp.end()){
                rt=i;
                break;
            }
        }
        TreeNode* root=new TreeNode(rt);
        if(nodes[rt].first != 0){
            root->left=fun(nodes,des,nodes[rt].first);
        }
        if(nodes[rt].second != 0){
            root->right=fun(nodes,des,nodes[rt].second);
        }
        return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna