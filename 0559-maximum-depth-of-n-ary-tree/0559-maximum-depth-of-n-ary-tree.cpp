/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
void dfs(Node* root,int height,int &ans){
    if(ans<height)ans=height;
    for(auto &i:root->children){
        dfs(i,height+1,ans);
    }
}
    int maxDepth(Node* root) {
        if(!root)return 0;
        int ans=INT_MIN;
        dfs(root,1,ans);
        return ans;
    }
};