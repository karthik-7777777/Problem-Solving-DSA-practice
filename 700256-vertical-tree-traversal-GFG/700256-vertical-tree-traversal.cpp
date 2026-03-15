/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        vector<vector<int>>ans;
        if(!root)return {};
        map<int,vector<int>>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            Node* n=x.first;
            int c=x.second;
            mp[c].push_back(n->data);
            if(n->left)q.push({n->left,c-1});
            if(n->right)q.push({n->right,c+1});
        }
        for(auto &i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};